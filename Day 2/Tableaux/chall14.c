#include <stdio.h>
int main(void)
{
    int n , total = 0;
    printf("Veuillez saisir la taille du tableau :\n");
    scanf("%d",&n);
    int Tab[n];
    printf("Veuillez saisir les valeurs du tableau :\n");
    for(int i=0;i<n;i++)
    {
        printf("T[%d] = ",i+1);
        scanf("%d",&Tab[i]);
    }
    printf("\n\n");
    for(int i = 0;i<n;i++)
    {
        total += Tab[i];
    }
    printf("La moyenne des elements du tableau est :\n");
    printf("%d",total/n);
    return 0;
}