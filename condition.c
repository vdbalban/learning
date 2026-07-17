#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 0;
    printf("Quel est votre age ?\n");
    scanf("%d", &age);
    if(age > 18) // if : si la condition est bonne fait
    {
        printf("Vous etes majeur\n");
    }
    else if(age < 18) // else if : Sinon si cet condition est bonne
    {
        printf("Retour a la page google\n");
    }
    else // Sinon fait cela
    {
        printf("ERROR\n"); // Si jamais je mets 18 pile 
    }                    // Aucune condition remplie
 
    return 0;
}

// D'abord il teste le premier if: si la condition est vraie, 
// alors il exécute ce qui se trouve entre les premières accolades.
// Sinon, il va au « sinon si » et fait à nouveau un test : 
// si ce test est vrai, alors il exécute les instructions correspondantes entre accolades.
// Enfin, si aucun des tests précédents n'a marché, 
// il exécute les instructions du « sinon ».