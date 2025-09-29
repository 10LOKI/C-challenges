#include <stdio.h>
#include <string.h>
int main(void)
{
    char str1[20];
    gets(str1);
    //strrev(str1);

    int l=strlen(str1) , temp ;
    for(int i=0;i<l/2;i++)
    {
        temp = str1[i];
        str1[i]=str1[l-1-i];
        str1[l-1-i] = temp;
    }
    printf("%s",str1);
    return 0;
}