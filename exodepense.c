#include <stdio.h>

double calcul_salaire(void)
{
	double	salaire;

	printf("\nQuel est votre salaire");
	printf("\nutilisez \".\" pour la virgule ... ");
	scanf("%lf", &salaire);
	return (salaire);
}

double calcul_depense(void)
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

double calcul_reste(double salaire, double depense)
{
	double	reste;

	reste = (salaire - depense);
	return (reste);
}

double calcul_pourcentage(double salaire, double depense)
{
	double	pourcentage;

	pourcentage = (depense / salaire * 100);
	return (pourcentage);
}

double resume(double salaire, double depense, double pourcentage, double reste)
{
	reste = calcul_reste(salaire, depense); 
	pourcentage = calcul_pourcentage(salaire, depense);
	printf("\n     ===  RESUME  ===\n"); 
	printf("\nVotre salaire est de : %.2lf€\n", salaire); 
	printf("Total des dépenses effectuées : %.2lf€\n", depense); 
	printf("Restant sur salaire : %.2lf€\n", reste);
	printf("Pourcentage fonds dépensé : %.1lf%%\n\n     ===          ===\n\n", pourcentage); //%% pour faire reconnaitre % comme caractere
	return (0);
}

int main(void)
{
	double	salaire;
	double	depense;
	double	reste; 
	double	pourcentage;
	
	salaire = calcul_salaire();
	depense = calcul_depense();
	reste = calcul_reste(salaire, depense);
	pourcentage = calcul_pourcentage(salaire, depense);
	return (0);
}