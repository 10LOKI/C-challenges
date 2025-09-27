#include <stdio.h>
int main(void)
{
    int n;
    printf("Veuillez saisr un nombre :\n");
    scanf("%d",&n);

    for(int i =10;i>0;i--)
    {
        printf("%d x %d = %d\n",n,i,i*n);
    }

    return 0;
}