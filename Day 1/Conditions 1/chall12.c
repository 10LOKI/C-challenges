#include <stdio.h>
int main(void)
{
    int h1,m1,s1;
    int h2,m2,s2;

    printf("Veuillez saisir l'instant 1 : \n HH:MM:SS\n");
    scanf("%d:%d:%d",&h1,&m1,&s1);

    printf("Veuillez saisir l'instant 2 : \n HH:MM:SS\n");
    scanf("%d:%d:%d",&h2,&m2,&s2);

    if ((h1 > h2) || (h1 == h2 && m1 > m2) || (h1 == h2 && m1 == m2 && s1 > s2))
    {
        printf("Le deuxieme instant vient avant le premier \n");
    }
    else if ( h1 == h2 && m1 == m2 && s1 == s2)
    {
        printf("Il s'agit du meme instant\n");
    }
    else
    {
        printf("Le premier instant vient avant le deuxieme \n");
    }
    return 0;
}