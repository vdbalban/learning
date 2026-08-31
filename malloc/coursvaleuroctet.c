#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct coordonnees coord;
struct coordonnees
{
    int i;
    char tel[1000];
    long fleur;
    float virgule;
};

int main(void)
{
    coord tableau[100];
    
    printf("******* *******\n");
    printf("int size : %ld\n", sizeof(int));
    printf("long size : %ld\n", sizeof(long));
    printf("char size : %ld\n", sizeof(char));
    printf("double size : %ld\n", sizeof(double));
    printf("float size : %ld\n", sizeof(float));
    printf("coord size : %ld\n", sizeof(coord));
    printf("coord tableau de 100 size : %ld\n\n\n", sizeof(tableau));

    return (0);
}

