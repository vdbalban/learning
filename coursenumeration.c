#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#ifndef VOLUME
#define VOLUME

typedef enum Volume Vol;
    enum Volume
    {
        MUTE, FAIBLE = 33, MOYEN = 66, FORT = 100
    };

int main(void)
{
    unsigned int musique = 0;
    while (musique != MUTE, FAIBLE, MOYEN, FORT)
    {
        write(1, "Selection du volume 0 => 100... ", 33);
        scanf("%d", &musique);    
        if (musique == MUTE)
        {
            write(1, "Le volume est regle sur MUTE\n", 30);
            break;
        }
        else if (musique <= FAIBLE)
        {
            write(1, "Le volume est regle a FAIBLE\n", 30);
            break;
        }
        else if (musique <= MOYEN)
        {
            write(1, "Le volume est regle a MOYEN\n", 29);
            break;
        }
        else if (musique <= FORT)
        {
            write(1, "Le volume est regle a FORT\n", 28);
            break;
        }
        else
            write(1, "Valeur incorrecte\n", 19);
    }

    return (0);
}

#endif
