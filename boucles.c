#include <stdio.h>

int main(void)
{
    int a = 0;
    long b =0;
    printf("\nBonjour,Entre un chiffre pour changer le monde\n");
    scanf("%ld", &b);
    while (a < b)
        {
        a++;
        printf("Bravo, Jeffrey Epstein vient de capturer son %deme enfants !\n", a);
        }
    printf("\nSois fier de toi %d enfant sont sur l'ile !", a);
    printf("\nEt tout ça, grace a ton choix !\n\n");

    return 0;
}