#include <stdio.h>
#include "funct.h"

int	main(void)
{
	int	heures;
	int	minutes;

	heures = 0;
	minutes = 630;
	decoupe_minutes(&heures, &minutes);
	printf ("%d heures et %d minutes\n", heures, minutes);
	return (0);
}

// Convertion d'une durée au format HH:MM
// J'envoie l'adresse de ma var avec & a ma fonction
// Ma fonction va traité avec la valeur qui a sur cette adresse
// 
// Dans le main cette valeur aura changé grace 
// a l'envoi de l'adresse et puis le traitement de la valeur 
// dans la fonction elle meme avec l'utilisation du pointeur
