#include <stdio.h>
#include <string.h>
int main(void)
{
    char str1[20];
    char str2[20];
    scanf("%s",str1);
    scanf("%s",str2);
    int l1 = strlen(str1);
    int l2 = strlen(str2);
    /*
    int cmp = strcmp(str1,str2);
    if(cmp == 0)
    {
        printf("sa7i7\n");
    }
    else
    {
        printf("Ghayr sa7i7\n");
    }
    */
   int x = 0;
   for(int i=0;i<l2 && i <l1;i++)
   {
    if(str1[i] == str2[i])
    {
        x = 0;
    }
    else
    {
        x = 1;
        break;
    }
   }
   if(x == 0)
   printf("It's the same \n");
   else if(x==1)
   printf("Not the same \n");
    return 0;
}