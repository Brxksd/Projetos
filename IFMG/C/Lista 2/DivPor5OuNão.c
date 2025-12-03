#include <stdio.h>

int main()
{
    int n;
    printf("Digite um número:\n");
    scanf("%d", &n);
    
    if(n%5==0){
        printf("\nO número %d é divisível por 5.\n", n);
    }else{
        printf("\nO número %d não é divisível por 5.\n", n);
    }

    return 0;
}
