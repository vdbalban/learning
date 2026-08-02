#include <stdio.h>
#include "funct.h"

int main(void)
{
    int tableau[10] = {15, 58, 98, 45, 78, 47, 58, 98, 25, 47};
    int tailletab;
    int resultat;
    int moyenne;
   
    tailletab = 10;

    resultat = somme_tableau(tableau, tailletab);
    moyenne = moyenne_tableau(tableau, tailletab);
    printf("\n***La somme des valeurs dans le tableau est : %d ***\n", resultat);
    printf("\n***La moyenne des nombres dans le tableau est de : %d ***\n\n", moyenne);

    return (0);
}
