#include <stdio.h>
int main(void)
{
    int num;
    printf("Veuillez saisir un nombre :\n");
    scanf("%d",&num);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d \n",num,i,num*i);
    }
    return 0;
}