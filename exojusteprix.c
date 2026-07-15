#include <stdio.h>

int main(void)
{
    int prixReel = 42;
    int estimation;
    int nombreEssaie = 1;
    
    printf("\nBonjour dans ce jeu vous allez devoir deviner le nombre mystere\n");
    printf("il se situe entre 1 et 100\n");
    printf("C'est a vous :\n\n");
    scanf("%d", &estimation);

    while(estimation != prixReel)
    {       
        while(estimation > prixReel)
        {
            printf("Reesaie, c'est moins !\n");
            nombreEssaie++;
            scanf("%d", &estimation);
        }     
        while(estimation < prixReel)
        {
            printf("Reesaie, c'est plus !\n");
            nombreEssaie++;
            scanf("%d", &estimation);
            break;
        }       
    }
    
    printf("\nFélicitation, Vous avez entrer le nombre mystere 42 !!\n");
    printf("\nil vous aura fallu %d tentatives\n\n", nombreEssaie);

    return 0;
}