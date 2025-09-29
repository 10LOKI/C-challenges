#include <stdio.h>
#include <string.h>

int b1;
#define MX 10
typedef struct 
{
    char nom[MX];
    int score = 0;
}player;

player arr[MX];

int points;
void menu()
{
    do
    {
        printf("Quiz C\n\n");
        printf("1 .Jouer\n");
        printf("2 .Voir le classement\n");
        printf("3 .Quitter\n");
        scanf("%d",&b1);
    } while (b1!=3);
}
void jouer()
{
    printf("Veuillez saisir votre nom :\n");
    fgets(arr[].nom ,MX,stdin);
    char b2;
    printf("\n\nQuestion 1 : Quel mot-clé permet de définir une constante en C ?\n");
    printf("a) let \n");
    printf("b) const\n");
    printf("c) #define\n");
    printf("Veuillez saisir un choix :\n");
    scanf("%c",&b2);
    switch (b2)
    {
    case 'a':
    printf("Votre reponse n'est pas juste \n");
    break;
    case 'b':
    printf("Votre reponse est juste \n");
    arr[MX].score = arr[MX].score + 10; 
    break;
    case 'c':
    printf("Votre reponse n'est pas juste \n");
    break;
    
    default:
    printf("Veuillez entre un valide choix !\n");
    }
}
int main(void)
{
    menu();

    return 0;
}