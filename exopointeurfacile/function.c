#include <stdio.h>
#include "function.h"

void	calcul_resultat(int *a, int *b, int *c)
{
	printf("\nEntrez le premier nombre a additionner ... ");
	scanf("%d", a);
	printf("\nEntrez le deuxieme nombre a additionner ... ");
	scanf("%d", b);
	*c = (*a + *b);
}
