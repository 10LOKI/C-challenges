#include <stdio.h>
int main(void)
{
    int a , b;
    printf("Veuillez saisir la valeur des nombres\n");
    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);

    if(a==b)
    {
        printf("%d + %d + %d = %d\n",a,b,b,a+b+a);
    }
    else
    {
        printf("%d + %d = %d \n",a,b,a+b);
    }

    return 0;
}