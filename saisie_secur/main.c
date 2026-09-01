#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#define TAILLE_MAX 1000

int	lire(char *chain, int longueur)
{
	char	*pos;

	*pos = NULL;
	if (fgets(chain, longueur, stdin) != NULL)
	{
		pos = strchr(chain, '\n');
		if (pos != NULL)
			*pos = '\0';
		return (1);
	}
	else
		return (0);
}

int	main(void)
{
	char	prenom[TAILLE_MAX];

	write(1, "Comment vous appelez vous nom et prenom ? \n", 44);
	lire(prenom, TAILLE_MAX);
	printf("Vous vous appelez %s !", prenom);
	return (0);
}

// fgets(prenom, TAILLE_MAX, stdin);