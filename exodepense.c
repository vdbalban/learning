#include <stdio.h>

double calculSalaire(void)
{
    double salaire;
    printf("\nQuel est votre salaire");
    printf("\nutilisez \".\" pour la virgule ... ");
    scanf("%lf", &salaire);
    return salaire;
}

double calculDepense(void)
{
    double a = 1; 
    double depense = 0;    
    while (a != 0)
    {
        printf("\nVeuillez saisir la depense, 0 pour terminer");
        printf("\nutilisez \".\" pour la virgule ... ");
        scanf("%lf", &a);
        depense = (a + depense);
    }
return depense;
}

int main(void)
{
    double salaire = calculSalaire(); 
    double depense = calculDepense();
    double reste = (salaire - depense); 
    double pourcentage = (depense / salaire * 100);
    printf("\n     ===  RESUME  ===\n"); 
    printf("\nVotre salaire est de : %.2lf€\n", salaire); 
    printf("Total des dépenses effectuées : %.2lf€\n", depense); 
    printf("Restant sur salaire : %.2lf€\n", reste);
    printf("Pourcentage fonds dépensé : %.1lf%%\n\n     ===          ===\n\n", pourcentage); //%% pour faire reconnaitre % comme caractere
    return 0;
}