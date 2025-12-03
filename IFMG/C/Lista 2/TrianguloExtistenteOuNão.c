#include <stdio.h>

int main()
{
    int n1, n2, n3;
    printf("Digite três números:\n");
    scanf("%d %d %d", &n1, &n2, &n3);

    if(n1 + n2 > n3 || n2 + n3 > n1 || n1 + n3 > n2){
        printf("\nVocê consegue formar um triangulo.\n");
    }else{
        printf("\nVocê não consegue formar um triangulo.\n");
    }
    
    return 0;
}
