#include <stdio.h>

int main()
{
    float a, r; 
    
    printf("Digite o valor do raio:\n");
    scanf("%f", &r);
    
    a = 3.1415 * (r *r);

    printf("\nA sua área é de: %f.\n", a);
    
    return 0;
}
