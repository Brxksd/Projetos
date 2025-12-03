#include <stdio.h>

int main()
{
    int a, b, s, p;
    
    printf("Digite o primeiro número:\n");
    scanf("%d", &a);
    printf("Digite o segundo número:\n");
    scanf("%d", &b);

    s = a - b;
    p = a * b;
    
    printf("\nA subtração resulta em %d, e o produto resulta em %d.\n", s, p);

    return 0;
}
