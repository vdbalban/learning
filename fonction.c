#include <stdio.h>

int triple(int nombre)  // fonction de type int
{
    int resultat = 0;

    resultat = 3 * nombre; // Calcul du "nombre" fourni par 3
    return resultat; // retourner le resultat 
}     
    // Possibilité d'écrire : pour raccourcir
    // int triple(int nombre )
    // {
    //     return 3 * nombre;
    // }


int main(void)
{
    return 0;
}