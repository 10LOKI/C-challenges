#include <stdio.h>
int main(void)
{
    int n;
    printf("Veuillez saisir la taille du tableau :\n");
    scanf("%d",&n);
    int T[n] ,num;
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
        }
        else
        {
            printf("Cet element n'est pas present \n");
        }
        
    }
    return 0;
}