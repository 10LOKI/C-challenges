#include <stdio.h>
int main(void)
{
    int n;
    int max = 0;
    printf("Veuillez saisir la taille du tableau :\n");
    scanf("%d",&n);
    int Tab[n];
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&Tab[i]);
        if(max <= Tab[i])
        {
            max = Tab[i];
        }
    }
    printf("%d\n",max);
    return 0;
}