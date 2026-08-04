#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	char	chaine[] = "Salut";
	int		i;

	write (1, chaine, 5);
	write (1, "\n", 1);
	return (0);
}
