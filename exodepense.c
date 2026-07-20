#include <stdio.h>

double	calcul_salaire(void)
{
	double	salaire;

	printf("\nQuel est votre salaire");
	printf("\nutilisez \".\" pour la virgule ... ");
	scanf("%lf", &salaire);
	return (salaire);
}

double	calcul_depense(void)
{
	double	a;
	double	depense;

	a = 1;
	depense = 0;
	while (a)
	{
		printf("\nVeuillez saisir la depense, 0 pour terminer");
		printf("\nutilisez \".\" pour la virgule ... ");
		scanf("%lf", &a);
		depense = (a + depense);
	}
	return (depense);
}

double	calcul_reste_pourcentage(double salaire, double depense)
{
	double	pourcentage;
	double	reste;

	pourcentage = (depense / salaire * 100);
	reste = (salaire - depense);
	return (pourcentage, reste);
}

double	finalresume(double sal, double dep, double rest, double pourcent)
{
	printf("\n     ===  RESUME  ===\n");
	printf("\nVotre salaire est de : %.2lf€\n", sal);
	printf("Total des dépenses effectuées : %.2lf€\n", dep);
	printf("Restant sur salaire : %.2lf€\n", rest);
	printf("Pourcentage fonds dépensé : %.1lf%%\n", pourcent);
	printf("\n     ===          ===\n\n");
	return (0);
}
//%% pour faire reconnaitre % comme caractere
// Ligne 46 : Rename pour ligne longue norminette

int	main(void)
{
	double	salaire;
	double	depense;
	double	reste;
	double	pourcentage;

	salaire = calcul_salaire();
	depense = calcul_depense();
	reste = calcul_reste_pourcentage(salaire, depense);
	pourcentage = calcul_reste_pourcentage(salaire, depense);
	finalresume(salaire, depense, reste, pourcentage);
	return (0);
}
