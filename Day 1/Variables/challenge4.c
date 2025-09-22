#include <stdio.h>
int main(void)
{
    float m_s , km_s;

    printf("Veuillez saisir la vitesse en km/s : \n");
    scanf("%f",&km_s);

    m_s = km_s * 0.27778;

    printf("La vitesse en m/s est %.2f",m_s);


    return 0;
}