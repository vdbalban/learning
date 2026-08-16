#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "funct.h"


void impression (char *r, int y,int x)
{
    int resultat_aire = (y*x);

    strcpy(r, "L'aire de mes coordonnées est..");
    sprintf(r, "L'aire de mes coordonnées y=%d et x=%d est... %d\n", y, x, resultat_aire);
    size_t  count = strlen(r);
    write(1, r, count);
}
