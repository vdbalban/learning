#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "funct.h"


void impression (char *r, int y,int x)
{
    int resultat_aire = (y*x);

    sprintf(r, "Le nombres de pixels pour y=%d et x=%d est... %d pixels\n", y, x, resultat_aire);
    size_t  count = strlen(r);
    write(1, r, count);
}
