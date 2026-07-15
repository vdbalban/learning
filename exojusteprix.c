#include <stdio.h>

int main(void)
{
    int prixReel = 42;
    int estimation;
    int nombreEssaie;
    
    printf("\nBonjour dans ce jeu vous allez devoir deviner le chiffre mystere\n");
    printf("il se situe entre 1 et 100\n");
    printf("C'est a vous :\n\n");
    scanf("%d", &estimation);
    while(estimation > prixReel)
    {
        printf("Reesaie, c'est moins\n");
        scanf("%d", &estimation);
    }
    while(estimation < prixReel)
    {
        printf("Reesaie, c'est plus\n");
        scanf("%d", &estimation);
        break;
    }

    return 0;
}