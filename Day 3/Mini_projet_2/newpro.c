// Mini_Projet : systeme de gestion de contacts

#include <stdio.h>
#include <string.h>
#define MX 100

typedef struct 
{
    char nom[MX];
    char num_tel[MX];
    char e_mail[MX];
}contact;

contact num[MX];
int nb_contact = 0;
int nbr;
char rech[MX];
int b1;
int contact_trouve = -1;

// la fonction de l'ajout
void ajout()
{
    printf("\nCombien de contact Voulez vous saisir :\n");
    scanf("%d",&nbr);
    getchar();
    if (nb_contact + nbr > MX) {
    printf("impossible d'ajouter %d contact !\n", nbr);
    return;
    }
    for(int a =0 ;a<nbr;a++)
    {
    printf("\nVeuillez saisir le Nom du contact :\n");
    printf("Nom du contact :  ");
    fgets(num[a].nom,MX,stdin);
    printf("Numero de Telephone :  ");
    fgets(num[a].num_tel,MX,stdin);
    printf("Email de la personne :  ");
    fgets(num[a].e_mail,MX,stdin);
    nb_contact++;
    }
}
int rechercher()
{
    char temp[20];
    int f = -1;
    printf("Veuillez saisir le nom du contact a rechercher :\n");
    fgets(temp,20,stdin);
    temp[strcspn(temp,"\n")]=0;
    
    for(int i =0 ; i< MX ;i++){
        char nom_temp[MX];
        strcpy(nom_temp ,num[i].nom);
        nom_temp[strcspn(nom_temp,"\n")]=0;
        if( strcmp(nom_temp,temp)==0  ){
            f = i ;
            break;
        }
    }
    if(f==-1){
        printf("contact n'est pas trouve \n");
        return;
    }
}
void afficher_contact(int index)
{
    printf("\nNom: %s\n", num[index].nom);
    printf("Telephone: %s\n", num[index].num_tel);
    printf("Email: %s\n\n", num[index].e_mail);
}
void modif()
{
rechercher();
if(contact_trouve == -1)
{
    return;
}
printf("1 . Modifier les informations :\n");
printf("2 . Exit \n");
scanf("%d",&b1);
switch(b1)
{
    case 1 :
    getchar();
    printf("\nNouveau nom :\n");
    fgets(num[contact_trouve].nom,MX,stdin);
    num[contact_trouve].nom[strcspn(num[contact_trouve].nom,"\n")] = 0;
    printf("\nNouveau numero de telephone :\n");
    fgets(num[contact_trouve].num_tel,MX,stdin);
    num[contact_trouve].num_tel[strcspn(num[contact_trouve].num_tel,"\n")]= 0;
    printf("\nNouveau email :\n");
    fgets(num[contact_trouve].e_mail,MX,stdin);
    num[contact_trouve].e_mail[strcspn(num[contact_trouve].e_mail ,"\n")]= 0;
    break;
    case 2:
    printf("Retour au menu.\n");
    break;
    default:
    printf("Choix invalide !\n");
}
}
void menu()
{
    int button;
do
{
    printf("\n\n=========== Systeme de gestion de loki ===========\n");
    printf("************** MENU **************\n");
    printf("1  . Ajouter un Contact\n");
    printf("2  . Modifier un Contact\n");
    printf("3  . Supprimer un Contact\n");
    printf("4  . Afficher Tous les Contacts\n");
    printf("5  . Rechercher un Contact\n");
    printf("0  . sortir du systeme \n");
    printf("\n\nVeuillez saisir un choix : \n");
    scanf("%d",&button);

    getchar();
    switch (button)
    {
    case 1:
    ajout();
    break;
    case 2:
    modif();
    break;
    case 3:
    break;
    case 4:
    break;
    case 5:
    break;
    case 0:
    printf("Merci a vous \n");
    break;
    default:
    printf("=====> Veuillez saisir un valide choix.\n");
    }
}while(button != 0);

}
int main(void)
{
    menu();

    return 0;
}