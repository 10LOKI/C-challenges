#include <stdio.h>
int main(void)
{
    int n;
    printf("Veuillez saisir la taille du tableau :\n");
    scanf("%d",&n);
    int Tab[n];
    for(int i=0;i<n;i++)
    {
        printf("T[%d] = ",i+1);
        scanf("%d",&Tab[i]);
    }
    int remp;
    printf("Veuillez saisr la valeur à remplacer :\n");
    scanf("%d",&remp);
    int nouv_val;
    printf("Veuillez saisir la nouvelle valeur a saisir :\n");
    scanf("%d",&nouv_val);
    for(int i=0 ;i<n;i++)
    {
        if(remp==Tab[i])
        {
            Tab[i] = nouv_val;
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("T[%d] = %d \n",i+1,Tab[i]);
    }
    return 0;
}