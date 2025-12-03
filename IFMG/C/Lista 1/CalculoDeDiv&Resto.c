#include <stdio.h>

int main()
{
    int a, b, d, r;
    
    printf("Digite o primeiro número:\n");
    scanf("%d", &a);
    printf("Digite o segundo número:\n");
    scanf("%d", &b);

    d = a / b;
    r = a % b;
    
    printf("\nA divisão resulta em %d e resto %d.\n", d, r);
    
    return 0;
}
