#include <stdio.h>
#include <math.h>
int main(void)
{
    float D , a , b , c , x1 , x2 , x;

    printf("ax2 + by + c = 0\n");
    printf("a = ");
    scanf("%f",&a);
    if(a==0)
    {
        printf("a should be =! 0 \n");
        return 1;
    }
    printf("b = ");
    scanf("%f",&b);
    printf("c = ");
    scanf("%f",&c);

    D = b*b - 4*a*c;
    printf("Delta = %.2f\n",D);
    if(D>0)
    {
        x1 = (-b - sqrt(D))/2*a;
        x2 = (-b + sqrt(D))/2*a;
        printf("L'Equation admet deux solutions reeles : \n");
        printf("x1 = %.2f\n",x1);
        printf("x2 = %.2f\n",x2);
    }
    else if (D == 0)
    {
        x = -b /2*a;
        printf("l'Equation admet une seule solutoin :\n");
        printf("x = %.2f\n",x);
    }
    else
    {
        printf("l'Equation n'admet pas de solutions reeles \n");
    }
    return 0;
}