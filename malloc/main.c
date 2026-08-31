#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
    int* allocref;
    int* allocquant;
    int reference;
    int quantite;
    int i;

    printf("Bienvenue dans l'interface de commande \n");
    printf("Combien de reférence souhaitez vous commandez ... ");
    scanf("%d", &reference);
    quantite = reference;
    
    allocref = malloc(sizeof(reference));
    allocquant = malloc(sizeof(quantite));

    if(allocref != NULL && allocquant != NULL)
    {
        i = 0;
        while(i < reference)
        {
            printf("Reference produit ... ");
            scanf("%d", &allocref[i]);
            printf("Quantite souhaitez ... ");
            scanf("%d", &allocquant[i]);
            i++;
        }

        i = 0;
        while(i < reference)
        {
            printf("Vous demandez %d unités de la reference : %d\n", allocquant[i], allocref[i]);
            i++;
        }
    }
    else
    {
        printf("ALLOCATION FAIL\n\n\n");
        exit(0);
    }
    
    free(allocref);
    free(allocquant);

    return (0);
}
