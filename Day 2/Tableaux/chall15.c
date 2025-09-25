#include <stdio.h>
int main(void)
{
    int n , m;
    printf("Veuillez saisir le nombre d'elements de ces deux tableaux :\n");
    printf("T1 = ");
    scanf("%d",&n);
    printf("T2 = ");
    scanf("%d",&m);
int T1[n] , T2[m];
for(int i =0;i<n;i++)
{
    printf("T[%d] = ",i+1);
    scanf("%d",&T1[i]);
}
for(int i =0;i<m;i++)
{
    printf("T[%d] = ",i+1);
    scanf("%d",&T2[i]);
}
int T3[n+m];
for(int i=0;i<n+m;i++)
{
    T3[i] = T1[i];
}
for(int i=0;i<n+m;i++)
{
    T3[n+i] = T2[i];
}
for(int i=0;i<n+m;i++)
{
    printf("%d\n",T3[i]);
}
    return 0;
}