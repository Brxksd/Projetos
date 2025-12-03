#include <stdio.h>

int main()
{
    float n;
    printf("Digite um número:\n");
    scanf("%f", &n);
    
    if(n > 0){
        printf("\n%f é um número positivo.\n", n);
    }else if(n < 0){
        printf("\n%f é um número negativo.\n", n);
    }else{
        printf("\n%f é igual a zero.\n", n);
    }
    return 0;
}
