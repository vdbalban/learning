#include <stdio.h>
#include <unistd.h>

#define LARGEUR_FENETRE 800
#define HAUTEUR_FENETRE 600
#define NOMBRE_PIXELS   (LARGEUR_FENETRE * HAUTEUR_FENETRE)
#define TAILLE_MAX  1000
#define CONSTANTE
#define FRANCKY()   write(1, "\nSalut c'est Franck Leboeuf\n", 29); \
					write(1, "Vous voulez savoir combien vaut votre voiture ?\n", 49); \
					write(1, "Allez sur vendezvotrevoiture.fr\n", 33);
#define MAJEUR(age) if (age >= 18) \
						write(1, "Vous etes majeur ! Vendez votre voiture !\n", 43); \
					else \
						write(1, "Vous etes mineur ! Va passer le permis.\n",41);


int main(void)
{
	char*   chaine1;
	char*   chaine2;
	int		age;

	chaine1[TAILLE_MAX];
	chaine2[TAILLE_MAX];
	FRANCKY()
	write(1, "Quel est votre age ... ", 24);
	scanf("%d", &age);
	MAJEUR(age)
	printf("\nCe fichier a ete compile le %s a %s\n", __DATE__, __TIME__);
	printf("%p", &chaine1);


	return (0);
}