#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "fonction.h" 
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
