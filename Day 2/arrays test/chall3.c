#include <stdio.h>
int main(void)
{
    int T[10] = {1,2,3,4,8,5,4,3,2,1};
    int cmp = 0;
    for(int i = 0;i<10;i++)
    {
        for(int j=1;j<i - 1;j++)
        {
            if(T[j]==T[i])
            {
                cmp++;
            }
        }
    }
    printf("Le nombre des element unique est %d\n",cmp);
}