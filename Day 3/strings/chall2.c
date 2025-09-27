#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[20];
    printf("Veuillez saisr une chaine du caractere :\n");
    fgets(str,20,stdin);
    int a = strlen(str);
    printf("%d\n",a);
    return 0;
}