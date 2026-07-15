// Prendre un AGE en INPUT
// Si entre 12 - 18 = Demande quelle ANNEE
// Si pair ou impair print deux message different 
// Si autre que 12 - 18 = Demandé de calculer 22+28
// Envoyer un message en fonction de la reponse 

#include <stdio.h>

int main(void)
{
    int age = 0;
    int annee = 0;
    int calcul = 0;
    printf("Quel age avez vous ?\n");
    scanf("%d", &age);
    if(age >= 12 && age <= 18)
    {
        printf("De quelle année etes vous ?\n");
        scanf("%d", &annee);
        if(annee % 2) // Si impair
        {
            printf("\nBonheur sur votre chemin !\n\n");
        }
        else // si pair
        {
            printf("\nMalheur sur votre chemin !\n\n");
        }
    }
    else   
    {
        printf("Combien font 22+28 ?\n");  //Essayer de boucler ça plus tard
        scanf("%d", &calcul);              //Jusqu'a bonne reponse
        if(calcul == 50)
        {
            printf("\nBonne reponse gros bogoss\n\n");
        }
        else
        {
            printf("\nSale noob mauvaise reponse\n\n");
        }
    }
    printf("Merci pour votre participation sur le projet du futur Bill\n\n");

    return 0;
}