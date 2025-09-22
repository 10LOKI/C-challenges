#include <stdio.h>
int main(void)
{
    float Y , Km;
    printf("Veuillez saisir la distance en kilometres : \n");
    scanf("%f",&Km);


    Y = Km * 1093.61;

    printf("La distance en Yards est : \n %.2f ",Y);
    return 0;
}