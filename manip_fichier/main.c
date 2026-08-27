#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define TAILLE_MAX 1000

int main(void)
{
    FILE* fichier = NULL;
    FILE* fichier2 = NULL;
    FILE* fichier3 = NULL;

    int age;
    int characterepointe;
    char chaine[TAILLE_MAX];

    age = 0;
    characterepointe = 0;

    fichier = fopen("test.txt", "w+"); // Ouverture Fichier
    fichier2 = fopen("test2.txt", "r");
    fichier3= fopen("test3.txt", "r");

    if (fichier != NULL)
    {
        // Ecriture de fichier
        write(1, "Ouverture et ecriture du fichier test.txt\n", 43);
        write(1, "Quel est votre age... ", 23);
        scanf("%d", &age);
        fputc('$', fichier);
        fputs("\nVive le code C", fichier);
        fprintf(fichier, "\nLa personne a %d ans", age);
        rewind(fichier);
        
        // Lecture de fichier

        printf("\n===> Lecture du fichier char par char avec fgetc : <===\n"); // <===============
        do
        {
            characterepointe = fgetc(fichier);
            printf("%c", characterepointe);
        } while (characterepointe != EOF);

        printf("\n\n===> Lecture de fichier jusqu'a premier retour ligne <===\n"); // <==============
        while (fgets(chaine, TAILLE_MAX, fichier2) != NULL)
        {
            printf("%s", chaine);
        }

        // Fermeture du fichier
        printf("\n");
        fflush(stdout); //  Vide le buffer, sinon le write s'affcher avant la fin du printf de fgetc
        fclose(fichier);        
        fclose(fichier2);
        fclose(fichier3);        
        write(1, "\nFermeture prog + fichier\n", 27);       
    }

    else
        write(1, "Impossible d'ouvrir le fichier test.txt\n", 41);
    
    return (0);
}
