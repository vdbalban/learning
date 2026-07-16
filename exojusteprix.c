#include <stdio.h>
#include <unistd.h>

int main(void)
{
    int prixReel = 42;
    int estimation = 0;
    int nombreEssaie = 1;
    
    write(1,"\n\nBonjour dans ce jeu vous allez devoir deviner le nombre mystere\n", 67);
    write(1, "il se situe entre 1 et 100\n", 28);
    write(1,"Vous avez 10 tentatives !\n", 27);
    write(1, "\nC'est a vous :\n", 17);
    

    while(estimation != prixReel && nombreEssaie != 11)
    {   
        printf("C'est votre %d essai(s) : \n\n", nombreEssaie);   
        scanf("%d", &estimation);
        if (estimation > prixReel)
        {
            write(1, "\nReesaie c'est moins !\n", 24);
            nombreEssaie++;
        }
        else if (estimation < prixReel)
        {
            write(1,"\nReesaie, c'est plus !\n", 24);
            nombreEssaie++;
        }
    }
        if (nombreEssaie == 11)
        {
            write(1, "\nVous avez épuisé vos 10 essais\n", 35);
        }
        else
        {
            write(1,"\nFélicitation, Vous avez entrer le nombre mystere 42 !!\n", 58);
            printf("\nil vous aura fallu %d tentatives\n\n", nombreEssaie);
        }

    return 0;
}