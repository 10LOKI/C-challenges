#include <stdio.h>
int main(void)
{
    int n;
    int min = 0;
    printf("Veuillez saisir la taille du tableau :\n");
    scanf("%d",&n);
    int Tab[n];
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&Tab[i]);
        if(min >= Tab[i])
        {
            min = Tab[i];
        }
    }
    printf("%d\n",min);
    return 0;
}