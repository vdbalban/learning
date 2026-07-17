#include <stdio.h>
#include <unistd.h>

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
    int nombreEntre = 0, nombreTriple = 0;

    write( 1,"Entrez un nombre :\n", 20);
    scanf("%d", &nombreEntre);

    nombreTriple = triple(nombreEntre);
    printf("*** Le nombre triple est %d ***\n", nombreTriple);

    return 0;
}