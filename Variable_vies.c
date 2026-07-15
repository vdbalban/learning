#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char *argv[]) // Equivalent au int main()
{
  int nombreDeVies = 5; // Déclaration de variable int 
  int niveau = 1;
  nombreDeVies = 5; 
  printf("il vous reste %d vies et vous etes niveau %d\n", nombreDeVies, niveau); // Print plus indication % et nom de variable
  printf("*** Troll des montagnes vous surprend ***\n");
  nombreDeVies = 4; // Déclaration de la nouvelle valeur de la variable
  printf("Il vous reste desormais %d vies\n", nombreDeVies);

  return 0; // Marque la fin du programme
}