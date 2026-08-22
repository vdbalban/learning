#include <stdio.h>
#include <stdlib.h>

#ifndef DEF_COORD
#define DEF_COORD

void impression (char *r, int y, int x);
typedef struct Coordonnees Coord;
struct Coordonnees
{
    int y;
    int x;
    char aire[100];
};

#endif