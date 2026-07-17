#include <stdio.h>

int main(void)
{
    int choixmenu = 1;
    printf("=== Bienvenue Chez Hamid Burger ! ===\n");
    printf("1. Royal Kabyle\n");
    printf("2. Mc Kefta\n");
    printf("3. Mc Tanjia\n");
    printf("4. Big Mouloud\n");
    printf("Merci de choisir votre menu ?\n");
    
    while (choixmenu) // Peut etre sans opérateur (+, -, ==)
    {                 // Dans cette situation choix menu a sa condition en boucle
        scanf("%d", &choixmenu); // Prendre l'input dans la boucle
        switch (choixmenu)
        {
        case 1:
        printf("Vous avez selectionne le menu (1) Royal Kabyle\n");
        return 0; // Sort de la fonction
        case 2:
        printf("Vous avez selectionne le menu (2) Mc Kefta\n");
        return 0;
        case 3:
        printf("Vous avez selectionne le menu (3) Mc Tanjia\n");
        return 0;
        case 4:
        printf("Vous avez selectionne le menu (4) Big Mouloud\n");
        return 0;
        default:
        printf("Vous avez entrée une mauvaise selection\n");
        printf("Merci de choisir votre menu ?\n");
        break;
        }
    }
        
    return 0;
}