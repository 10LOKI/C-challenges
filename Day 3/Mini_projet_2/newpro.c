// Mini_Projet : systeme de gestion de contacts

#include <stdio.h>
#include <string.h>
#define MX 100

typedef struct 
{
    char name[MX];
    char num_tel[MX];
    char e_mail[MX];
}contact;

contact nemra[MX];
int nb_contact = 0;
int nbr;
char rech[MX];

void rechercher()
{
if(nb_contact == 0)
{
    printf("=======> le systeme est encore vide \n\n");
}
else
{
    getchar();
    printf("Veuillez saisir le nom du contact à modifier :\n");
    fgets(rech,MX,stdin);
    rech[strcspn(rech,"\n")]= 0;

    int contact_trouve = -1;
    for(int b = 0; b <nbr; b++)
    {
    if(strcmp(rech,nemra[b].name) == 0)
    {
        contact_trouve = b;
        break;
    }
    }
    if(contact_trouve == -1)
    {
        printf("Contact non trouve.\n");
    }
else
    { 
    printf("Nouveau nom : ");
    fgets(nemra[contact_trouve].name, MX, stdin);
    nemra[contact_trouve].name[strcspn(nemra[contact_trouve].name, "\n")] = 0;
    printf("Nouvel numero de telephone : ");
    fgets(nemra[contact_trouve].num_tel, MX, stdin);
    nemra[contact_trouve].num_tel[strcspn(nemra[contact_trouve].num_tel, "\n")] = 0;
    printf("Nouveau email : ");
    scanf("%f", &nemra[contact_trouve].e_mail);
    getchar();
    }
}
}
void ajout()
{
    printf("\nCombien de contact Voulez vous saisir :\n");
    scanf("%d",&nbr);
    for(int a =0 ;a<nbr;a++)
    {
    getchar();
    printf("\nVeuillez saisir le Nom du contact :\n");
    printf("Nom du contact :  ");
    fgets(nemra[a].name,MX,stdin);
    printf("Numero de Telephone :  ");
    fgets(nemra[a].num_tel,MX,stdin);
    printf("Email de la personne :  ");
    fgets(nemra[a].e_mail,MX,stdin);
    nb_contact++;
    }
}

void modif()
{
rechercher();
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
    int nett = scanf("%d",&button);

if(nett != 1) {
        printf("invalide input");
        while(getchar() != '\n');
        continue;
    }
    while(getchar()!= '\n');

    switch (button)
    {
    case 1:
    ajout();
    break;
    case 2:
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