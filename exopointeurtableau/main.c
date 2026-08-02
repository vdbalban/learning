#include <stdio.h>
#include "funct.h"

int	main(void)
{
	int		tableau[10] = {15, 58, 98, 45, 78, 47, 58, 98, 25, 47};
	int		tailletab;
	int		resultat;
	float	moyenne;

	tailletab = 10;
	resultat = somme_tableau(tableau, tailletab);
	moyenne = moyenne_tableau(tableau, tailletab);
	printf("\n***Somme des valeurs : %d ***\n", resultat);
	printf("\n***Moyenne des nombres : %.2f ***\n\n", moyenne);
	return (0);
}

// Dans le cadre de la validation norminette :
// int tableau[10];

// tableau[0] = 15;
// tableau[1] = 58;
// tableau[2] = 98;