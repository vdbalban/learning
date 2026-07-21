#include <stdio.h>
#include "calcul.h"

double	calcul_salaire(void);
double	calcul_depense(void);
double	calcul_reste(double salaire, double depense);
double	calcul_pourcentage(double salaire, double depense);
double	final_resume(double sal, double dep, double rest, double pourcent);

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
