#include <stdio.h>
#include <string.h>
#define MX 10
int cmp=0;
typedef struct 
{
    char nom[30];
    int score;
}joueur;
struct questions
{
    char text[MX];
    char reponse[3][MX];
    int 
};

joueur player[MX];
int nplayer=0;

void  jouer()
{
    int a;
    printf("question 1 : is 1 + 1 = 8 ?\n");
    printf("1 . yes \n");
    printf("2 . noooo\n");
    scanf("%d",&a);
    switch(a)
    {
        case 1 : 
        printf("C'est  ps juste \n");
        break;
        case 2 :
        printf("c juste \n");
        player[MX].score++;
        default : 
        printf("Veuillez saisir a valid input \n");
    }
    int b;
    printf("question 1 : is morocco the best country in the world ?\n");
    printf("1 . yes \n");
    printf("2 . noooo\n");
    printf("3 . Maybe \n");
    scanf("%d",&b);
    switch(b)
    {
        case 1 : 
        printf("false\n");
        break;
        case 2 :
        printf("false\n");
        case 3 :
        printf("True\n");
        player[MX].score++;
        break;
        default : 
        printf("Veuillez saisir a valid input \n");
    }

    int c;
    printf("question 1 : is messi overated ?\n");
    printf("1 . no \n");
    printf("2 . ofc nooooo\n");
    scanf("%d",&c);
    switch(c)
    {
        case 1 : 
        printf("okay\n");
        break;
        case 2 :
        printf("ma boi\n");
        player[MX].score++;
        default : 
        printf("Veuillez saisir a valid input \n");
    }
    
    printf("Votre score %d \n",player[MX].score);
        nplayer++;
}
void class()
{
    for(int i = 0; i < nplayer - 1; i++) {
        for(int j = 0; j < nplayer - i - 1; j++) {
            if(strcmp(player[j].nom, player[j + 1].nom) > 0) {
                joueur temp = player[j];
                player[j] = player[j + 1];
                player[j + 1] = temp;
            }
        }
    }
    printf("Classement:\n");
    for(int i = 0; i < nplayer; i++) {
        printf("%d. %s - Score: %d\n", i + 1, player[i].nom, player[i].score);
    }
}
void menu()
{
    int button;
    do{
        printf("=========Sbou3a game\n\n");
        printf("1 . jouer\n");
        printf("2 . voir le classement \n");
        printf("3 . quitter\n");
        printf("Veuillez saisir un choix \n");
        scanf("%d",&button);
        switch(button)
        {
            case 1 :
            jouer();
            break;
            case 2 :
            class();
            break;
            case 3 :
            break;
            default :
            printf("Invalide input\n");
        }
    }while (button!=3);
}
int main(void)
{
int b1;
menu(b1);

    return 0;
}