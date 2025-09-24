#include <stdio.h>
int main(void)
{
    int n;
    printf("Veuillez saisir la taille du tableau :\n");
    scanf("%d",&n);
    int T[n] , P[n]; 
    printf("Veuillez saisir les valeurs du tableau :\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&T[i]);
    }
    for (int i = 0; i < n; i++)
    {
        P[i] = T[i];
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n\n",P[i]);
    }
    
}
