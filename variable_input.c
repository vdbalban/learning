#include <stdlib.h>
#include <stdio.h>

int main()
{
    // scanf pour demander une input utilisateur
    int age = 0;
    double poids = 00;
    printf("Quel age avez vous ?\n\n");
    scanf("%d", &age); // demande utilisateur
    printf("Vous avez donc %d ans\n\n", age);
    printf("Quel poids faites vous ?\n\n");
    scanf("%lf", &poids); // lf = double, demande utilisateur
    printf("Vous faites %lf kilos\n\n", poids);

    return 0;
}