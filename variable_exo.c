//Imaginez un programme qui demande deux nombres à l'utilisateur :
//Stockez ces deux nombres dans des variables.
//Faites la somme de ces variables.
//Stockez le résultat dans une variable appelée resultat.
//Vous n'avez plus qu'à afficher le résultat du calcul à l'écran, sous les yeux ébahis de l'utilisateur qui n'aurait jamais été capable de calculer cela de tête aussi vite.
//Essayez de coder vous-même ce petit programme, c'est facile et ça vous entraînera ! 

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int inputUN = 0;
    int inputDeux = 0;
    
    printf("Entrer le premier chiffre\n");
    scanf("%d", &inputUN);
    printf("%d\n", inputUN);
    printf("Entrer le deuxieme chiffre\n");
    scanf("%d", &inputDeux);
    printf("%d\n", inputDeux);
    int resultat = (inputDeux + inputUN);
    printf("Votre resultat est de %d", resultat);

    return 0;
}