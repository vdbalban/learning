#include <stdio.h>
#include "funct.h"

void	decoupe_minutes(int *heures, int *minutes)
{
	printf("Entrez un nombre de minutes ... ");
	scanf("%d", minutes);
	*heures = *minutes / 60;
	*minutes = *minutes % 60;
}
