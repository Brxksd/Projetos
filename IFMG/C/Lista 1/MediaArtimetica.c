#include <stdio.h>

int main()
{
	int nu, nd, nt, m;

	printf("Digite suas 3 notas neste ano:\n");
	scanf("%d", &nu);
	scanf("%d", &nd);
    scanf("%d", &nt);
    
    m = (nu + nd + nt) / 3;
    
    printf("\nA sua média de notas esse ano foi %d.\n", m);
    
	return 0;
}
