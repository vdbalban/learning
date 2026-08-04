#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	char	chaine[6];
	int		i;

	chaine[0] = 'S';
	chaine[1] = 'A';
	chaine[2] = 'L';
	chaine[3] = 'U';
	chaine[4] = 'T';
	chaine[5] = '\0';
	i = 0;
	while (i < 5)
	{
		write (1, (chaine + i), 1);
		write (1, "\n", 1);
		i++;
	}
	return (0);
}
