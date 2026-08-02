#include <stdio.h>
#include "funct.h"

int main(void)
{
    int tableau[10] = {1, 58, 98, 45, 78, 47, 58, 98, 25, 47};
    int i = 0;

    for (i = 0; i < 10; i++)
    {
        printf("\nnombre cellule %d est égale a %d\n", i, tableau[i]);
    }

    return (0);
}