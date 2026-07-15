#include <stdio.h>

int main(void)
{
    int choixmenu = 0;
    printf("=== Bienvenue Chez Hamid Burger ! ===\n");
    printf("1. Royal Kabyle\n");
    printf("2. Mc Kefta\n");
    printf("3. Mc Tanjia\n");
    printf("4. Big Mouloud\n");
    printf("Merci de choisir votre menu ?\n");
    scanf("%d", &choixmenu);
    switch (choixmenu)
        {
        case 1:
        printf("Vous avez selectionne le menu (1) Royal Kabyle\n");
        break;
        case 2:
        printf("Vous avez selectionne le menu (2) Mc Kefta\n");
        break;
        case 3:
        printf("Vous avez selectionne le menu (3) Mc Tanjia\n");
        break;
        case 4:
        printf("Vous avez selectionne le menu (4) Big Mouloud\n");
        break;
        default:
        printf("Vous avez entrée une mauvaise selection\n");
        break;
        }
    
        
    return 0;
}