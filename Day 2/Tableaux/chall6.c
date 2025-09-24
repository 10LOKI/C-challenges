#include <stdio.h>
int main(void)
{
    int n;
    int fac;
    printf("Veuillez saisir la taille du tableau :\n");
    scanf("%d",&n);
    printf("Veuillez saisir le facteur de multiplication :\n");
    scanf("%d",&fac);
    int T[n]; 
    printf("Veuillez saisir les valeurs du tableau :\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&T[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d x %d = %d\n",T[i],fac,T[i]*fac);
    }
    return 0;
}