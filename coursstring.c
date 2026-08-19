#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	main(void)
{
	char	prenom[100];
	size_t	tailleprenom;

	write(1, "Quel est votre prénom ?\n", 26);
	scanf("%s", prenom);
	tailleprenom = strlen(prenom);
	write(1,"Bonjour et bienvenue a vous ",29);
	write(1,prenom, tailleprenom);
	write(1,"\n", 1);
	return (0);
}
// strlen(prenom) = i;