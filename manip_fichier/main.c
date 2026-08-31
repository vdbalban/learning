#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define TAILLE_MAX 1000
#define SCORE 3
// #define SEEK_SET 0
// #define SEEK_CUR 1   Deja definie dans la biblio stdio.h
// #define SEEK_END 2

int main(void)
{
    FILE* fichier = NULL;
    FILE* fichier2 = NULL;
    FILE* scoregame = NULL;

    int age;
    int characterepointe;
    char chaine[TAILLE_MAX];
    int score[SCORE] = {0};
    int seekprint;

    age = 0;
    characterepointe = 0;

    fichier = fopen("test.txt", "w+"); // Ouverture Fichier
    fichier2 = fopen("test2.txt", "r");
    scoregame = fopen("game.txt", "r");

    if (fichier != NULL && fichier2 != NULL && scoregame != NULL)
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
            if (characterepointe != EOF)
                printf("%c", characterepointe);
        } while (characterepointe != EOF);

        printf("\n\n===> Lecture de fichier jusqu'a premier retour ligne <===\n"); // <==============
        while (fgets(chaine, TAILLE_MAX, fichier2) != NULL)
        {
            printf("%s", chaine);
        }

        printf("\n\n===> Lecture chaine formatee fscanf <===\n"); // <=================
        fscanf(scoregame, "%d %d %d", &score[0], &score[1], &score[2]);
        printf("\nLes meilleures scores sont : %d %d %d", score[0], score[1], score[2]);

        // Deplacement dans un fichier

        printf("\n\n===> Se déplacer a l'aide de ftell/fseek <===\n\n"); // <=================

        fseek(fichier2, -14, SEEK_END);
        long position = ftell(fichier2); /// REPRENDRE LE COURS A CETTE ETAPE 
        printf("Curseur en position ** %ld ** texte avec fgetc != EOF donne .. ", position);
        do
        {
            seekprint = fgetc(fichier2);
            if (seekprint != EOF)
                printf("%c", seekprint);
        } while(seekprint != EOF);

        // Fermeture du fichier
        printf("\n");
        fflush(stdout); //  Vide le buffer, sinon le write s'affcher avant la fin du printf de fgetc
        fclose(fichier);        
        fclose(fichier2);
        fclose(scoregame);        
        write(1, "\nFermeture prog + fichier\n", 27);
    }

    else
        write(1, "Impossible d'ouvrir le fichier test.txt\n", 41);
    
    return (0);
}
