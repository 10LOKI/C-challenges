#include <stdio.h>
int main(void)
{
    int chiffre , n1 , n2 , n3 , n4;

    printf("Saisir un digit de 4 chiffres :\n");
    scanf("%d",&chiffre);
    
    n1 = chiffre % 10;
    chiffre = chiffre / 10;
    printf("%d",n1);
    n2 = chiffre % 10;
    chiffre = chiffre / 10;
    printf("%d",n2);
    n3 = chiffre % 10;
    chiffre = chiffre / 10;
    printf("%d",n3);
    n4 = chiffre % 10;
    chiffre = chiffre / 10;
    printf("%d",n4);

    return 0;
}