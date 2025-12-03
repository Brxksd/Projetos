#include <stdio.h>

int main()
{
    int n;
    printf("Digite um número:\n");
    scanf("%d", &n);
    
    if(n%2==0){
        printf("\nO número %d é par.\n", n);
    }else{
        printf("\nO número %d é ímpar.\n", n);
    }
    return 0;
}
