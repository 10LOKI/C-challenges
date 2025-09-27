#include <stdio.h>
int main(void)
{
    char str[20];
    printf("Veuillez saisr une chaine du caractere :\n");
    fgets(str,20,stdin);
    printf("%s\n",str);

    return 0;
}