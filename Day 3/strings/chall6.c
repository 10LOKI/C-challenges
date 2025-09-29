#include <stdio.h>
#include <string.h>
int main(void)
{
    char s1[10];
    char harf;
    printf("Veuillez saisir un string :\n");
    fgets(s1,10,stdin);
    printf("Veuillez saisir un character :\n");
    scanf(" %c",&harf);
    int cmp = 0;
    for (int i = 0; i < strlen(s1); i++)
    {
        if (s1[i] == harf)
        {
            cmp++;
        }
    }
    printf("Le nombre d'occurance de %c est %d \n",harf,cmp);
    return 0;
}