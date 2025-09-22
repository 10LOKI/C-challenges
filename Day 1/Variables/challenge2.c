#include <stdio.h>
int main(void)
{
    float C , K;

    printf("Veuillez saisir la temperture en celcius :\n");
    scanf("%f",&C);

    K = C + 273.15;

    printf("La temperature en kelvin est : %.2f \n",K);
    return 0;
}