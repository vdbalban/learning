#include <stdio.h>
#include "funct.h"

int main(void)
{
    int tableau[4]; // 0, 1, 2, 3,
    int i;

    i = 0;
    tableau[0] = 1450;
    tableau[1] = 1581;
    tableau[2] = 1852;
    tableau[3] = 1033;

    printf("La premiére adresse de tableau est : %p\n", tableau);
    for (i = 0; i < 4; i++)
    {
    printf("la valeur %d est a l'adresse : %p\n",tableau[i] , &tableau[i]);
    }
    return (0);
}

// printf("la valeur %d est a l'adresse : %p\n",tableau[0] , &tableau);
    // printf("la valeur %d est a l'adresse : %p\n",tableau[1] , &tableau[1]);
    // printf("la valeur %d est a l'adresse : %p\n",tableau[2] , &tableau[2]);
    // printf("la valeur %d est a l'adresse : %p\n",tableau[3] , tableau + 3); //peux egalement s'écrire ainsi