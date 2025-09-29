#include <stdio.h>
#include <string.h>
int main(void)
{

char str[20];
printf("Veuillez saisir une string : \n");
fgets(str,20,stdin);
for(int i=0;str[i]!='\0';i++)
{
if(str[i] >= 'a' && str[i] <= 'z')
{
    str[i]= str[i] - 32;
}
}
printf("%s",str);
return 0;
}