#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char a , b;


    printf("Veuillez saisir une lettre : \n");
    scanf("%c",&a);
    b = tolower(a);

    switch(b)
    {
        case 'a':
        printf("%c est une voyelle\n",a);
        break;
        case 'e':
        printf("%c est une voyelle\n",a);
        break;
        case 'i':
        printf("%c est une voyelle\n",a);
        break;
        case 'o':
        printf("%c est une voyelle\n",a);
        break;
        case 'u':
        printf("%c est une voyelle\n",a);
        break;
        case 'y':
        printf("%c est une voyelle\n",a);
        break;
        default :
        printf("%c est un consonne \n",a);

    }

    return 0;
}