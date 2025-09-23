#include <stdio.h>
void l_verif(char a)
{
    if(a > 64 && a < 91 )
    {
        printf("Cette lettre est en Majuscule\n");
    }
    else if (a > 96 && a < 123)
    {
        printf("Cette lettre est en Minuscule \n");
    }
    else
    {
        printf("C pas une lettre \n");
    }
}
int main(void)
{
    int c;
    printf("Veuillez saisir une lettre :\n");
    scanf("%c",&c);
    l_verif(c);

    return 0;
}