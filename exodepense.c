#include <stdio.h>

double calculSalaire(double salaire)
{
    printf("\nQuel est votre salaire");
    printf("\nutilisez \".\" pour la virgule ... ");
    scanf("%lf", &salaire);
    return salaire;
}

double calculDepense(double depense)
{
    double a = 1; depense = 0;    
    while (a != 0)
    {
        printf("\nVeuillez saisir la depense, 0 pour terminer");
        printf("\nutilisez \".\" pour la virgule ... ");
        scanf("%lf", &a);
        depense = (a + depense);
    }
return depense;
}

// double calculReste(double reste) //double resultatDepense,double resultatSalaire
// {
// return(resultatSalaire - resultatDepense);
// }


// double calculPourcentage(int Pourcentage)
// {
//     return Pourcentage;
// }

int main(void)
{
    double resultatSalaire = calculSalaire(0); //double resultatPourcentage = calculPourcentage(resultatPourcentage);
    double resultatDepense = calculDepense(0); //double resultatRestant = calculReste(0);
    printf("\n     ===  RESUME  ===\n"); 
    printf("\nVotre salaire est de : %.2lf€\n", resultatSalaire); 
    printf("Total des dépenses effectuées : %.2lf€\n", resultatDepense); 
    //printf("Restant sur salaire : %.2lf€\n", resultatRestant);
    // printf("Pourcentage fonds dépensé : %.0lf\%\n", resultatPourcentage); 
    return 0;
}