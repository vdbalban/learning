#include <stdio.h>

int main()
{
    int age = 0;
    printf("Quel est votre age ?\n");
    scanf("%d", &age);
    if(age >= 6 && age < 12)
    {
        printf("Vous etes a l'ecole primaire\n");
    }
    else if(age >= 12 && age < 16)
    {
        printf("Vous etes au college\n");
    }
    else if(age >= 16 && age < 19)
    {
        printf("Vous etes au lycee\n");
    }
    else if(age <6)
    {
        printf("tu n'as rien a faire devant ce pc\n");
    }
    else if(age >64)
    {
        printf("Profites de ta retraite !!!\n");
    }
    else
    {
        printf("Vous etes en etudes supp ou salarie\n");
    }
      

    return 0;
}