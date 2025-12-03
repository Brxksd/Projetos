#include <stdio.h>

int main()
{
    float n1, n2;
    printf("Digite dois números:\n");
    scanf("%f %f", &n1, &n2);
    
    if(n1 > n2){
        printf("\nO número %f é maior.\n", n1);
    }else{
        printf("\nO número %f é maior.\n", n2);
    }
    return 0;
}
