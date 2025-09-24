#include <stdio.h>
int main(void)
{
    int n;
    int cmp =0;
    printf("Veuillez saisir la taille du tableau :\n");
    scanf("%d",&n);
    int T[n]; 
    printf("Veuillez saisir les valeurs du tableau :\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&T[i]);
    }
for (int a=0;a<n; a++)
{
    for (int b = a+1; b < n; b++)
    {
        if(T[b]<T[a])
        {
            cmp = T[a];
            T[a] =T[b];
            T[b] = cmp; 
        }
    }
}
for (int i = 0; i < n; i++)
printf("%d\n",T[i]);
    return 0;
}