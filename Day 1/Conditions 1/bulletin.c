#include <stdio.h>
void noting(int a)
{
    if(a >= 0 && a < 10)
    {
        printf("T'es  recalé\n");
    }
    else if(a >= 10 && a < 12)
    {
        printf("T'es obtenu par la  mention passable\n");
    }
    else if (a >= 12 && a < 14)
    {
        printf("T'es obtenu par la mention assez bien\n");
    }
    else if (a >= 14 && a < 16)
    {
        printf("Bien\n");
        }
    else if (a >= 16 && a <= 20)
    {
        printf("EXELLENT\n");
    }
    else
    {
        printf("Invalid input");
    }
    
}
int main(void)
{
int note ;
printf("Veuillez saisir votre note :\n");
scanf("%d",&note);
noting(note);
    return 0;
}