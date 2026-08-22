#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

typedef struct Coordonnees Coordonnees;
struct Coordonnees
{
    int x;
    int y;
};

void initialiserCoordonnees(Coordonnees* point) 
{
    write(1, "Entrez une valeur a placer en memoire de Y\n", 44);
    scanf("%d", &point->y);
    write(1, "Entrez une valeur a placer en memoire de X\n", 44);
    scanf("%d", &point->x);
}

int main(void)
{
    Coordonnees monPoint;                           
    initialiserCoordonnees(&monPoint);
    printf("Ordonnée : %d\n", monPoint.y);
    printf("Abscisse : %d\n", monPoint.x);   
    return 0;
}
