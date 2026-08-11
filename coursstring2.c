#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
                
int main(void)  
{               
    char    chaine[100] = "Ceci est le tableau 1\n";
    char    pretexte[100] = "Tableau 2 concatener avec... ";
    char    desticopie[100];
    char    recherche_suite_char[100];
    size_t  chaine_copie;
    size_t  chaine_cat;
    size_t  nb_suite;
    size_t  nb_chaine_list;
    char *suite_chaine;
    char *suite_chaine_list;

    suite_chaine = NULL;
    suite_chaine_list = NULL;
    suite_chaine = strchr(chaine, 's');  //strrchr (Pointe le dernier char trouve)
    suite_chaine_list = strpbrk(chaine, "ivwzy");

    strcpy(desticopie, chaine);
    strcpy(recherche_suite_char, suite_chaine);
    strcat(pretexte, desticopie);
    chaine_cat = strlen(pretexte);
    chaine_copie = strlen(desticopie);
    write(1, desticopie, chaine_copie);
    write(1, pretexte, chaine_cat);
    write(1, "\nComparaison de chaine ...\n", 28);
    if (strcmp(chaine, desticopie) == 0)
        write(1, "chaine et desticopie sont identique\n", 37);
    else
        write(1, "chaine et desticopie ne sont pas identique\n", 44);
    nb_suite = strlen(suite_chaine);
    if (suite_chaine != NULL)
    {
        write(1,"\nles char suivant la lettre \"s\" sont.. ", 40);
        write(1, recherche_suite_char, nb_suite);
    }
    nb_chaine_list = strlen(suite_chaine_list);
    if (suite_chaine_list != NULL)
    {
        write(1, "\nApres verification des lettres a recherche \"ivwzy\" la suite est .. ",69);
        write(1,suite_chaine_list, nb_chaine_list);
    }
    

    return (0);
}

































    // strcmp(chaine, pretexte);
    // if (strcmp(chaine, pretexte) == 0)
    // {
    //     write(1, "chaine et pretexte sont identique\n", 35);
    // }
    // else
    // {
    //     write(1, "chaine et pretexte ne sont pas identique\n", 42);
    // }