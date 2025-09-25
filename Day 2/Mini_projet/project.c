#include <stdio.h>

typedef struct
{
    char 
}
int menu()
{   
    int b1;
    do
    {
        printf("=========== LOKI's Library ===========\n");
        printf("\n\n************** MENU **************\n");
        printf("1  . Ajouter un livre au stock\n");
        printf("2  . Afficher tous les livres disponibles\n");
        printf("3  . Rechercher un livre par son titre\n");
        printf("4  . Mettre à jour la quantité d'un livre\n");
        printf("5  . Supprimer un livre du stock\n");
        printf("6  . Afficher le nombre total de livres en stock\n");
        printf("0  . Exit the libray\n");
        printf("\n\nVeuillez saisir un choix : \n");
        scanf("%d",&b1);
    }
    while(b1 != 0);
}
int main(void)
{
    int b1;
    menu(b1);

    return 0;
}