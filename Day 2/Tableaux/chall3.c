#include <stdio.h>
int main(void)
{
    int n;
    int total = 0;
    printf("Veuillez saisir la taille du tableau :\n");
    scanf("%d",&n);
    int Tab[n];
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&Tab[i]);
        total += Tab[i];
    }
    printf("le total des nombres est %d\n",total);

}