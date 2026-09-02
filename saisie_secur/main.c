#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#define TAILLE_MAX 8

void vider_buffer()
{
	int c;
	
	c = 0;
	while(c != '\n' && c != EOF)
	{
		c = getchar();
	}
}

int	lire(char *chain, int longueur)
{
	char	*pos;

	pos = NULL;
	if (fgets(chain, longueur, stdin) != NULL)
	{
		pos = strchr(chain, '\n');
		if (pos != NULL)
			*pos = '\0';
		else 
			vider_buffer ();
		return (1);
	}
	else
		vider_buffer();
	
	return (0);
}

long lire_long()
{
	char nombre_texte[TAILLE_MAX];

	if (lire(nombre_texte, TAILLE_MAX))
		return strtol(nombre_texte, NULL, 10);
	else
		return (0);
}

double lire_double()
{
	char double_texte[TAILLE_MAX];

	if (lire(double_texte, TAILLE_MAX))
		return strtod(double_texte, NULL);
	else
		return (0);
}

int	main(void)
{
	char	prenom[TAILLE_MAX];
	long	age;
	double	poids;

	printf("Comment vous appelez vous nom et prenom ? \n");
	lire(prenom, TAILLE_MAX);
	printf("Vous vous appelez %s !\n", prenom);
	printf("Quel est votre age ? \n");
	age = lire_long();
	printf("Vous avez %ld ans ! \n", age);
	printf("Quel est votre poids (ex:56.20)\n");
	poids = lire_double();
	printf("Votre poids est de %.2f kilos\n", poids);

	return (0);
}
