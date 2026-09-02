#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define DEF_LECTURE
#ifdef DEF_LECTURE

void vider_buffer();
int	lire(char *chain, int longueur);
long lire_long();
double lire_double();

#endif