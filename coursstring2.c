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
    char    ajout[100] = "\nCeci est le test pour sprintf\n";
    size_t  chaine_copie;
    size_t  chaine_cat;
    size_t  nb_suite;
    size_t  nb_chaine_list;
    size_t  nb_stringstring;
    size_t  nb_sprintf;
    char *suite_chaine;
    char *suite_chaine_list;
    char *stringstring;

    stringstring = NULL;
    suite_chaine = NULL;
    suite_chaine_list = NULL;
    suite_chaine = strchr(chaine, 's');  //strrchr (Pointe le dernier char trouve)
    suite_chaine_list = strpbrk(chaine, "rtivwzy");

    strcpy(desticopie, chaine);
    strcpy(recherche_suite_char, suite_chaine);
    strlcat(pretexte, desticopie, 100); //strlcat verifie l'allocationn memoire avant d'écrire
    chaine_cat = strlen(pretexte);
    chaine_copie = strlen(desticopie);
    write(1, desticopie, chaine_copie);
    write(1, pretexte, chaine_cat);
    write(1, "\nComparaison de chaine ...\n", 28);
    if (strcmp(chaine, desticopie) == 0)
        write(1, "Chaine et desticopie sont identique\n", 37);
    else
        write(1, "Chaine et desticopie ne sont pas identique\n", 44);
    nb_suite = strlen(suite_chaine);
    if (suite_chaine != NULL)
    {
        write(1,"\nLes char suivant la lettre \"s\" sont.. ", 40);
        write(1, recherche_suite_char, nb_suite);
    }
    nb_chaine_list = strlen(suite_chaine_list);
    if (suite_chaine_list != NULL)
    {
        write(1, "\nApres verification des lettres a recherche \"rtivwzy\" la suite est .. ",69);
        write(1,suite_chaine_list, nb_chaine_list);
    }
    stringstring = strstr(pretexte, "ble");
    nb_stringstring = strlen(stringstring);
    if(stringstring != NULL)
    {
        write(1, "\nLa suite de lettre \"ble\" a été retouver ici ... ", 52);
        write(1, stringstring, nb_stringstring);
    }
    sprintf(chaine, "%s", ajout);
    nb_sprintf = strlen(chaine);
    write(1, chaine, nb_sprintf);
    
    return (0);
}
