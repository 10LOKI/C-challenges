#include <stdio.h>
int main(void)
{
    float lon , lar;

    printf("Veuillez saisir les cotes d rectangle : \n");
    printf("Longueur = ");
    scanf("%f",&lon);
    printf("Largeur = ");
    scanf("%f",&lar);

    printf("La surface du rectangle est : %.2f",lon*lar);
    return 0;
}