#include <stdio.h>
#include "funct.h"

int somme_tableau (int tableau[], int tailletab)
{
    int resultat;
    int i;
    
    for (i = 0 ; i < tailletab ; i++)
    {
        (resultat += tableau[i]);
    }

    return(resultat);
}

int moyenne_tableau (int tableau[],int tailletab)
{
    int moyenne;
    int resultat;
    int i;
    
    for (i = 0 ; i < tailletab ; i++)
    {
        (resultat += tableau[i]);
    }
    
    moyenne = (resultat / tailletab);

    return (moyenne);
}
