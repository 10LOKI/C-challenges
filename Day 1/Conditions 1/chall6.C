#include <stdio.h>
int main(void)
{
    int num;

    printf("Veuillez saisir un nombre :\n");
    scanf("%d",&num);

    if(num > 0)
    {
        printf("Ce nombre est positif\n");
    }
    else if (num < 0)
    {
        printf("Ce nombre est negatif\n");
    }
    else
    {
        printf("Ce nombre est null\n");
    }

    return 0;
}