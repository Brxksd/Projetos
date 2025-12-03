#include <stdio.h>

int main()
{
    int a, b;
    
    printf("Digite o número A e o número B:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    
    printf("\nApos a troca de valores, A é %d e B é %d.\n", b, a);

    return 0;
}
