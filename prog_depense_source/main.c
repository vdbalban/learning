#include <stdio.h>
#include "calcul.h"

int	main(void)
{
	double	salaire;
	double	depense;
	double	reste;
	double	pourcentage;

	salaire = calcul_salaire();
	depense = calcul_depense();
	reste = calcul_reste(salaire, depense);
	pourcentage = calcul_pourcentage(salaire, depense);
	final_resume(salaire, depense, reste, pourcentage);
	return (0);
}
