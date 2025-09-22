#include <stdio.h>
#include <math.h>
int main(void)
{
    const int PI = 3.14159265359;
    float r , vol;

    printf("Veuillez saisir le rayon de la sphere :\n");
    scanf("%f",&r);

    vol = (4/3) * PI * pow(r,3);

    printf("Le Volume De la Sphere est %.2f \n",vol);
    return 0;
}