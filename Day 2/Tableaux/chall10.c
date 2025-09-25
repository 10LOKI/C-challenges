#include <stdio.h>
int main(void)
{
    int n;
    printf("Veuillez saisir la taille du tableau :\n");
    scanf("%d",&n);
    int T[n] ,num , cmp = 0;
    printf("Veuillez saisir les valeurs du tableau :\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&T[i]);
    }
    printf("Veuillez saisir le nombre a rechercher :\n");
    scanf("%d",&num);
    for(int i = 0;i<n;i++)
    {
        if(T[i]==num)
        {
            printf("cet element est present \n");
            return 1;
        }
        else
        {
            cmp ++;
        }
    }
    if(cmp == 0)
    {
        printf("%d cet element est absent \n",num);
    }
    return 0;
}