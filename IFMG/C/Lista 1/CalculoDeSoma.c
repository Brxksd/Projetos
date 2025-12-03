#include <stdio.h>

int main()
{
    int a, b, r;
    
    printf("Digite o primeiro número:\n");
    scanf("%d", &a);
    printf("Digite o segundo número:\n");
    scanf("%d", &b);
    
    r = a + b;
    
    printf("\nO resultado de %d + %d é: %d.\n", a, b, r);
    
    return 0;
}
