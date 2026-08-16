#include <stdio.h>
#include <stdlib.h>

void impression (char *r, int y, int x);
typedef struct Coordonnees Coord;
struct Coordonnees
{
    int y;
    int x;
    char aire[100];
};
