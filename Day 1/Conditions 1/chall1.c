#include <stdio.h>
int main(void)
{
    int a;

    printf("Veuillez saisir un nombre :\n");
    scanf("%d",&a);

    if(a % 2 == 0)
    {
        printf("ce nombre est pair\n");
    }
    else if (a % 2 != 0)
    {
        printf("ce nombre est impair\n");
    }
    return 0;
}