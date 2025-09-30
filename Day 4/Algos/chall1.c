#include <stdio.h>
int main(void)
{
int arr[10];
printf("Veuillez saisir les elements du tableau :\n");
for (int i = 0; i < 10; i++)
{
    printf("T[%d] = ",i+1);
    scanf("%d",&arr[i]);
}

for (int i = 0; i < 10; i++)
{
    int temp;
    for(int j=0;j<10-1-i;j++)
    {
        if(arr[j]>arr[j+1])
        {
            temp = arr[j];
            arr[j]= arr[j+1];
            arr[j+1]=temp;
        }
    }
}
printf("Tableau trié : \n");
for (int i = 0; i < 10; i++) {
    printf("%d\n", arr[i]);
}
    return 0;
}