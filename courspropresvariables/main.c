#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "funct.h"

int main(void)
{
    Coord donnee;

    donnee.y = 25;
    donnee.x = 20;
    
    impression(donnee.aire, donnee.y, donnee.x);
    return (0);
}