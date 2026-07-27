#include <stdio.h>
#include "function.h"

int	main(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 0;
	c = 0;
	calcul_resultat(&a, &b, &c);
	printf("\n**** le resultat de %d + %d est de %d ****\n\n", a, b, c);
	return (0);
}

// Crée un prog basé sur les pointeur pour une addition 
// avec header et ficier function