#include <stdio.h>

int main()
{
    float n;
    printf("Digite a sua nota final:\n");
    scanf("%f", &n);
    
    if(n >= 60){
        printf("\nVocê está aprovado.\n");
    }else{
        printf("\nVocê está reprovado.\n");
    }

    return 0;
}
