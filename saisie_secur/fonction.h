#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#ifndef FONCTION_H
#define FONCTION_H

void vider_buffer();
int	lire(char *chain, int longueur);
long lire_long();
double lire_double();

#endif