#include <stdio.h>
int main(void)
{
    int n;
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
    printf("Les Elements PAires du tableau :\n");
    for(int i = 0;i<n;i++)
    {
        if(Tab[i] % 2 == 0)
        {
            printf("%d\n",Tab[i]);
        }
    }
    return 0;
}