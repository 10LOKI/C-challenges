#include <stdio.h>
int main(void)
{
    int T[10] = {1,2,3,4,5,5,4,3,2,1};
    int cmp = 0;
    for(int i = 0;i<10;i++)
    {
        if(T[i]!=T[10-i])
        {
            cmp = 1;
        }
        else
        {
            cmp =0;
        }
        
    }
    if (cmp==0)
    {
        printf("Mirror array\n");
    }
    else
    {
        printf("Not a mirror\n");
    }
    
    


    return 0;
}