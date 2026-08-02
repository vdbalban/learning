#include <stdio.h>
#include "funct.h"

int	somme_tableau(int tableau[], int tailletab)
{
	int	resultat;
	int	i;

	resultat = 0;
	i = 0;
	for (i; i < tailletab; i++)
	{
		(resultat += tableau[i]);
	}
	return (resultat);
}

float	moyenne_tableau(int tableau[], int tailletab)
{
	float	moyenne;
	float	resultat;
	int		i;

	resultat = 0;
	i = 0;
	while (i < tailletab)
	{
		(resultat += tableau[i]);
		i++;
	}
	return ((float)resultat / (float)tailletab);
}

// Changement de format de condition pour moyenne_tableau
// pour entrer dans le cadre de la norminette