#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    srand(time(NULL));

    char *numjours[]={
        "Lundi",
        "Mardi",
        "Mercredi",
        "Jeudi",
        "Vendredi",
        "Samedi",
        "Dimanche"
    };

    int jours = sizeof(numjours) / sizeof(numjours[0]);

    int te9mira = rand() % jours;

    printf("Jour de la semaine aléatoire : %s\n", numjours[te9mira]);

    return 0;
}