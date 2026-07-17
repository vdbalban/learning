#include <stdio.h>
#include <unistd.h>

int triple(int nombre)  // fonction de type int
{
    int resultat;

    resultat = 3 * nombre; // Calcul du "nombre" fourni par 3
    return resultat; // retourner le resultat 
}     
    // Possibilité d'écrire : pour raccourcir
    // int triple(int nombre)
    // {
    //     return 3 * nombre;
    // }


int main(void)
{
    int nombreEntre, nombreTriple;

    write( 1,"Entrez un nombre : ... ", 24);
    scanf("%d", &nombreEntre);

    nombreTriple = triple(nombreEntre);
    printf("*** Le nombre triple est %d ***\n", nombreTriple);

        // printf("Le triple de ce nombre est %d\n", triple(nombreEntre));
        // Le résultat de la fonction est directement envoyé au printf et n'est pas stocké dans une variable
        
    return 0;
}