#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[100];
    char i;
    printf("Veuillez saisr une chaine du caractere :\n");
    fgets(str,20,stdin);
    while(str[i] != '\0')
    {
        i++;
    }
    printf("%d\n",i);
    return 0;
}