#include <stdio.h>

int main(void)
{
    int age = 0;
    printf("Choisissez un chiffre entre 1-6 s'il vous plait\n");
    scanf("%d", &age);
        if (age == 13)
            printf("Tu as trouver le code mystere bogoss\n"); //accolades facultative
        else if (age == 21)                                   //car il une instruction
            printf("Tu as gagne un chromosome\n"); 
        else
        {
            switch (age)
            {
                case 1:
                    printf("1 comme lapin\n");
                    break;
                case 2:
                    printf("2 passe moi la beuh\n");
                    break;
                case 3:
                    printf("3 je mange une oie\n");
                    break;
                    case 4:
                    printf("4 je roule en 4x4\n");
                    break;
                case 5:
                    printf("5 tape en cinq\n");
                    break;
                case 6:
                    printf("6 mange ma saucisse\n");
                    break;
                default:
                    printf("Mauvaise entrée, Consigne chiffre entre 1 et 6\n");
                    break;    
                
                }
            }

    return 0;
}