#include <stdio.h>

int main()
{
    char l;
    
    printf("Digite uma letra:\n");
    scanf("%c", &l);
    
    if(l == 'a' || l == 'e' || l == 'i' || l == 'o' || l == 'u' || l == 'A' || l == 'E' || l == 'I' || l == 'O' || l == 'U'){
        printf("\nA letra é uma vogal.\n");
    }else{
        printf("\nA letra não é uma vogal.\n");
    }

    return 0;
}
