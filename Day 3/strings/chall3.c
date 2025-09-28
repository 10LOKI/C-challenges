#include <stdio.h>
#include <string.h>
int main(void)
{
    char str1[20];
    char str2[20];

    printf("Veuillez saisr une chaine du caractere :\n");
    scanf(" %s",str1);
    scanf(" %s",str2);
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    for (int i = 0; i < len2; i++)
    {
        str1[len1 + i] = str2[i];
    }
    str1[len1 + len2] = '\0';
    // strcat(str1,str2);
    printf("%s",str1);


    return 0;
}