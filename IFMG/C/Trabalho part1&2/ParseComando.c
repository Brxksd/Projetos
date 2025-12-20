#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h> 

/* NOME DO GRUPO:
    - Breno Gurgel Braga Vieira
    - Emílio Pedrosa d1e Figueiredo
    - Higor Luan de Castro Pena
    - Kaique Pinheiro Soares
*/

int parseComando();

typedef struct {
    char id[20];          //   ID do dispositivo (exemplo: "SENS_TEMP")
    int num;              //   Número do dispositivo (exemplo: "3")
    char cmd[20];         //   Ação a ser tomada(ex : "SET_VELOCIDADE")
    float valor;          //   Valor numérico (se aplicável, ex: 1.25)
    int status_valor;     //   0 se o comando não usa 'VALOR', 1 se usa
    int status;           //   1 se o comando é válido, 0 se é inválido
} Pacotada200MBporSeg ;

/* IDH: Montador de comando-geral  |  Irá pegar todos os valores recebidos 
   pela função main e organiza-los em uma string única, que posteriormente
   será compreendida pelo módulo CLP.
*/
void montarStringComando(char *id, int *num ,char *cmd, float *valor, Pacotada200MBporSeg *entrada, char coisada[]){

    char num_str[3];          // String que vai receber o num_sel
    char valor_str[20];       // String que vai receber o valor_sel

    snprintf(num_str, sizeof(num_str), "%02d", *num);        // Conversor  int  -> string
    snprintf(valor_str, sizeof(valor_str), "%.2f", *valor);  // Conversor float -> string

    strcpy(coisada, id);
      strcat(coisada, "_");
        strcat(coisada, num_str);
          strcat(coisada, ",");
            strcat(coisada, cmd);
              strcat(coisada, ",");
                strcat(coisada, valor_str);

    printf("\nComando Analisado (Formato de Envio): %s\n", coisada);
    parseComando(coisada, entrada);
}

/* ZERA-STRUCT: O inicializador  |  Irá zerar TODAS as classes do struct 
   para garantir que não haverá lixo ou cache inutilizado no pacote.
*/
void inicializarStruct(Pacotada200MBporSeg *saida){
    saida->num = 0;
    saida->valor = 0.0;
    saida->status_valor = 0;
    saida->status = 0;
    
    saida->id[0] = '\0';
    saida->cmd[0]= '\0';
}

/* CLP: O Receptor  |  Irá receber a string bruta, quebra-la em partes 
   para interpreta-las e inserir na struct carinhosamente apelidada de
   "Pacotada200MBporSeg". 
*/
int parseComando(char *string_bruta, Pacotada200MBporSeg *saida){
    char *token; 
    char copia_string[150]; 

    inicializarStruct(saida);
    
    // Cria cópia para não estragar a original
    strcpy(copia_string, string_bruta);
    
    // Parte 1: Id e Número de Dispositivo
    // Pega tudo até a primeira vírgula
    token = strtok(copia_string, ","); 
    
    if (token != NULL) {
        // Procura o ÚLTIMO underline (_) na string pra separar nome do número
        // Usamos strrchr (reverse char) porque o próprio nome pode ter underline (SENS_TEMP)
        char *separador = strrchr(token, '_');

        if (separador != NULL) {
            *separador = '\0';                // Corta a string no underline
            strcpy(saida->id, token);         // A parte esquerda vira o ID
            saida->num = atoi(separador + 1); // A parte direita vira o int
        } else {
            strcpy(saida->id, token);         // Se não achar um underline, só copia o ID
            saida->num = 0;
        }
    }

    //  Parte 2: Comando  |  Ex: "SET_VELOCIDADE"
    token = strtok(NULL, ",");                // Pega o próximo pedaço após a vírgula
    if (token != NULL) {
        strcpy(saida->cmd, token);
    }

    //  Parte 3: Valor  |  Ex: "3.00"
    token = strtok(NULL, ",");
    if (token != NULL) {
        saida->valor = atof(token);
        saida->status_valor = 1;
    }

    // Hora de validar essa brincadeirinha 
    const char *comandos_validos[] = {"SET_VELOCIDADE", "SET_ESTADO", "LER_DADO"};
    saida->status = 0;

    for (int i = 0; i < 3; i++) {
        if (strcmp(saida->cmd, comandos_validos[i]) == 0) {
            saida->status = 1;
            break;
        }
    }

    // Validando se o valor de "SET_ESTADO" é diferente de 0 e 1
    if (strcmp(saida->cmd, "SET_ESTADO") == 0) {
        if (saida->valor != 0.0 && saida->valor != 1.0) {
            saida->status = 0;
        }
    }

    return saida->status;
}

/* PÓS-CLP: Resultado final  |  Imprime o pacote (de formal literal), 
   exibindo as informaçoesgerais sobre o pacote, também demonstrando 
   se os dados foram armazenados em seus tipos corretos. 
*/
void imprimirPacote(Pacotada200MBporSeg* pacote) {
    printf("\n |-> Detalhes do comando analizado:");
    printf("\n | > Valido (1) Invalido (0): %d", pacote->status);
    printf("\n | > ID do Dispositivo: %s", pacote->id);
    printf("\n | > Número do Dispositivo: %02d", pacote->num);
    printf("\n | > Comando Recebido: %s\n", pacote->cmd);
     if(pacote->status_valor == 1){
        printf(" | > Valor = %.2f\n", pacote->valor);
     }
     else {
        printf(" | > Valor = 0 (N/A)\n");
     }
}

/* MAIN: Função principal  |  Irá ser a "Interface Gráfica de Interação 
   Humana" em que o uuário irá selecionar o dispositivo, seu "numero de 
   série", o comando que deseja-se realizar e o valor para tal comando. 
   Isso tudo será passado para a função "montarStringComando".
*/
int main() {
    int num_sel, escolhas, escolhidas, escolhadas;
    float val_sel;
    char id_sel[20], cmd_sel[20], string_coisada[100];
    Pacotada200MBporSeg packzinDoOruam;
    
    printf("Escolha o Dispositivo:\n1: SENS_TEMP\n2: MTR_ESTEIRA\n3: VAL_OX\nOpcao: -> ");
    scanf(" %d", &escolhas);
    switch (escolhas) {       
        case 1:
            printf("\n\nSensor de Temperatura selecionado...");
            strcpy(id_sel, "SENS_TEMP");
            getchar();
            break;
        case 2:
            printf("\n\nMotor de esteira selecionado...");
            strcpy(id_sel, "MTR_ESTEIRA");
            getchar();
            break;
        case 3:
            printf("\n\nValvula de Oxigênio selecionada...");
            strcpy(id_sel, "VAL_OX");
            getchar();
            break;
        default:
            printf("Dispositivo inexistente... Encerrando programa.");
            return 0;
    }

    printf("\n\nDigite o número do dispositivo (Ex: 3)\nOpcao -> ");
    scanf(" %d", &escolhidas);
    switch (escolhidas) {       
        case 1:
            num_sel = 1;
            break;
        case 2:
            num_sel = 2;
            break;
        case 3:
            num_sel = 3;
            break;
        default:
            printf("Dispositivo inexistente... Encerrando programa.");
            return 0;
    }

    printf("\n\nEscolha o Comando:\n1: SET_VELOCIDADE\n2: SET_ESTADO\n3: LER_DADO\nOpcao: -> ");
    scanf(" %d", &escolhadas);
    switch (escolhadas) {
        case 1:
            printf("\n\nComando 'Setar Velocidade' selecionado...");
            strcpy(cmd_sel, "SET_VELOCIDADE");
            break;
        case 2:
            printf("\n\nComando 'Setar Estado' selecionado...");
            strcpy(cmd_sel, "SET_ESTADO");
            break;
        case 3:
            printf("\n\nComando 'Ler Dados' selecionado...");
            strcpy(cmd_sel, "LER_DADO");
            break;
        default:
            printf("Comando inexistente... Encerrando programa.");
            return 0;
    }

    if (escolhadas == 1 ) {
        printf("\n\nDigite o valor da velocidade:\n -> ");
        scanf("%f", &val_sel);
    } else if (escolhadas == 2){
        printf("\n\nDigite 1 para 'Ligado' ou 0 para 'Desligado':\n -> ");
        scanf("%f", &val_sel);
    } 

    if(val_sel < 0.00){
        printf("\n\nValor inválido para o comando 'Setar Estado'... Encerrando programa.");
        return 0;
    }

    if (escolhadas == 3) {
        val_sel = 0.00;
    }    

    montarStringComando(id_sel, &num_sel, cmd_sel, &val_sel, &packzinDoOruam, string_coisada);

    parseComando(string_coisada, &packzinDoOruam);

    imprimirPacote(&packzinDoOruam);

    return 0;
}