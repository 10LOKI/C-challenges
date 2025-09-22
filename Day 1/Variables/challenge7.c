#include <stdio.h>
int main(void)
{
    float n1 , n2 , n3 , a , b;

    printf("veuillez saisir les valeurs des numeros :\n");
    printf("n1 = ");
    scanf("%f",&n1);
    printf("n2 = ");
    scanf("%f",&n2);
    printf("n3 = ");
    scanf("%f",&n3);

    a = (n1 * 2) + (n2 * 3) + (n3 * 5);
    b = 2 + 3 + 5;
    printf("La moyenne ponderee des trois nombres est : %.2f\n",a/b);

}