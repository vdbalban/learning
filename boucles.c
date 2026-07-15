#include <stdio.h>

int main(void)
{
    long a =0;
    long b =0;
    printf("\nBonjour,Entre un chiffre pour changer le monde\n");
    scanf("%ld", &b); //%ld tag d'un long
    while (a < b)
        {
        a++;
        printf("Bravo, Jeffrey Epstein vient de capturer son %ldeme enfants !\n", a);
        }
    printf("\nSois fier de toi %ld enfant sont sur l'ile !", a);
    printf("\nEt tout ça, grace a ton choix !\n\n");

    int c = 5;

    do
    {
        printf("%d\n", c);
        c--;
    } while (c != -1);
    printf("F.B.I OPEN THE DOORS !!\n\n");

    int compteur;
    for(compteur = 3; compteur != -1; compteur--)
    {
        printf("%d\n", compteur);
    }
    printf("Vous etes arretez !!\n");

    return 0;
}