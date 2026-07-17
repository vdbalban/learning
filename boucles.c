#include <stdio.h>

int main(void)
{
    long a =0;
    long b =0;
    printf("\nBonjour,Entre un chiffre\n");
    scanf("%ld", &b); //%ld tag d'un long
    while (a < b)
        {
        a++;
        printf("Bravo, vous avez sauvé %ld chats !\n", a);
        }
    printf("\nSois fier de toi %ld chats sont sur l'ile au loisirs!", a);
    printf("\nEt tout ça, grace a ton choix !\n\n");

    int c = 5;

    do
    {
        printf("%d\n", c);
        c--;
    } while (c != -1);
    printf("Miaouuu !!\n\n");

    int compteur;
    for(compteur = 3; compteur != -1; compteur--)
    {
        printf("%d\n", compteur);
    }
    printf("Grrrr !!\n");

    return 0;
}