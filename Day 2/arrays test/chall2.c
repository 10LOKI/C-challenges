#include <stdio.h>
int main(void)
{
    int n;
    printf("les elements du tableau :\n");
    scanf("%d",&n);
    int T[n];

    printf("Veuillez saisir les valeurs du tableau : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&T[i]);
    }
    printf("\n\n");
    for(int i =n-1;i>=0;i--)
    {
        printf("%d\n",T[i]);
    }
}