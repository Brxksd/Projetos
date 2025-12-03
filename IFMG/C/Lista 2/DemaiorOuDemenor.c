#include <stdio.h>

int main()
{
    int i;
    printf("Digite a sua idade:\n");
    scanf("%d", &i);
    
    if(i >= 18){
        printf("\nVocê é maior de idade.\n");
    }else{
        printf("\nVocê é menor de idade.\n");
    }

    return 0;
}
