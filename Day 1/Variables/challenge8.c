#include <stdio.h>
#include <math.h>
int main(void)
{
    float n1 , n2 , n3 , moy ;
    printf("Veuillez saisir la valeur des trois nombres :\n");
    scanf("%f\t%f\t%f",&n1,&n2,&n3);

    moy = (pow((n1*n2*n3),(1/3)));

    printf("la moyenne de ces trois nombres est : %.2f \n",moy);

    return 0;
}