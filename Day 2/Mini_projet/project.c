#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define mx 50
struct livre
{
    char titre[mx];
    char auteur[mx];
    float prix;
    int quantite;
};
int menu()
{   
    struct livre a_liv[mx];
    int nb_liv , cmp = 0;
    char rech[mx];
    struct livre b_liv[mx];
    int b1;
    do
    {
        printf("=========== LOKI's Library ===========\n");
        printf("\n\n************** MENU **************\n");
        printf("1  . Ajouter un livre au stock\n");
        printf("2  . Afficher tous les livres disponibles\n");
        printf("3  . Modifier les informations d'un livre\n");
        printf("4  . Supprimer un livre du stock\n");
        printf("5  . Afficher le nombre total de livres en stock\n");
        printf("0  . Exit the libray\n");
        printf("\n\nVeuillez saisir un choix : \n");
        scanf("%d",&b1);

        switch (b1)
        {
        case 1:
        printf("Combien d livres voulez vous ajouter : \n");
        scanf("%d",&nb_liv);
        for(int i =0;i<nb_liv;i++)
        {
        getchar();
        printf("\nVeuillez saisr les informations du livre :\n");
        printf("Auteur du livre :  ");
        fgets(a_liv[i].auteur,mx,stdin);
        printf("Titre du livre :   ");
        fgets(a_liv[i].titre,mx,stdin);
        printf("Prix du livre  :   ");
        scanf("%f",&a_liv[i].prix);
        printf("Quantite des livre  :    ");
        scanf("%d",&a_liv[i].quantite);
        cmp++;
        }
        break;
        case 2:
        printf("\nLes details de chaque livre :\n");
        for(int i =0;i<nb_liv;i++)
        {
            printf("\n\nLivre n %d :\n",i+1);
            printf("l'auteur de livre est %s\n",a_liv[i].auteur);
            printf("Le titre du livre est %s\n",a_liv[i].titre);
            printf("Le prix du livre est %.2f DH\n",a_liv[i].prix);
            printf("LA quantite des livres est %d \n",a_liv[i].quantite);
        }
        break;
        case 3:
            getchar();
            printf("Veuillez saisir le livre a rechercher :\n");
            printf("\nEntrer le Titre du livre :  ");
            
            char rech[mx];
            fgets(rech, mx, stdin);
            rech[strcspn(rech, "\n")] = 0;
            
            int liv_trouve = -1;
            for(int i = 0; i < nb_liv; i++)
            {
                char titre_temp[mx];
                strcpy(titre_temp, a_liv[i].titre);
                titre_temp[strcspn(titre_temp, "\n")] = 0;
                
                if(strcmp(rech, titre_temp) == 0)
                {
                    liv_trouve = i;
                    break;
                }
            }
            
            if(liv_trouve == -1)
            {
                printf("Livre non trouve.\n");
                break;
            }
            int b2;
            printf("\nLivre trouve , Modifier les informations :\n");
            printf("1. Titre de livre\n");
            printf("2. Auteur de livre\n");
            printf("3. Prix de livre\n");
            printf("4. Quantite de livre\n");
            printf("5. Toutes les informations\n");
            printf("0. Exit\n");
            printf("\nVeuillez saisir un choix : ");
            scanf("%d", &b2);
            getchar();
            
            switch (b2)
            {
                case 1:
                    printf("Nouveau titre : ");
                    fgets(a_liv[liv_trouve].titre, mx, stdin);
                    a_liv[liv_trouve].titre[strcspn(a_liv[liv_trouve].titre, "\n")] = 0;
                    printf("Titre modifie avec succes !\n");
                    break;
                    
                case 2:
                    printf("Nouvel auteur : ");
                    fgets(a_liv[liv_trouve].auteur, mx, stdin);
                    a_liv[liv_trouve].auteur[strcspn(a_liv[liv_trouve].auteur, "\n")] = 0;
                    printf("Auteur modifie avec succes !\n");
                    break;
                    
                case 3:
                    printf("Nouveau prix : ");
                    scanf("%f", &a_liv[liv_trouve].prix);
                    getchar();
                    printf("Prix modifie avec succes !\n");
                    break;
                case 4:
                    printf("Nouvelle quantite : ");
                    scanf("%d", &a_liv[liv_trouve].quantite);
                    getchar();
                    printf("Quantite modifie avec succes !\n");
                    break;
                case 5:
                    printf("Nouveau titre : ");
                    fgets(a_liv[liv_trouve].titre, mx, stdin);
                    a_liv[liv_trouve].titre[strcspn(a_liv[liv_trouve].titre, "\n")] = 0;
                    printf("Nouvel auteur : ");
                    fgets(a_liv[liv_trouve].auteur, mx, stdin);
                    a_liv[liv_trouve].auteur[strcspn(a_liv[liv_trouve].auteur, "\n")] = 0;
                    printf("Nouveau prix : ");
                    scanf("%f", &a_liv[liv_trouve].prix);
                    getchar();
                    printf("Nouvelle quantite : ");
                    scanf("%d", &a_liv[liv_trouve].quantite);
                    getchar();
                    printf("Toutes les informations modifies avec succes !\n");
                    break;
                    
                case 0:
                    printf("Retour au menu.\n");
                    break;
                    
                default:
                    printf("Choix invalide !\n");
            }
            break;
        case 4:
        getchar();
        printf("Supprimer un livre :\n");
        printf("Entrer le titre du livre à supprimer : ");
        
        fgets(rech, mx, stdin);
        rech[strcspn(rech, "\n")] = 0;
        
        int livre_trouve = -1;
        for(int i = 0; i < nb_liv; i++)
        {
            char titre_temp[mx];
            strcpy(titre_temp, a_liv[i].titre);
            titre_temp[strcspn(titre_temp, "\n")] = 0;
            
            if(strcmp(rech, titre_temp) == 0)
            {
                livre_trouve = i;
                break;
            }
        }
        if(livre_trouve == -1)
        {
            printf("Livre non trouvé.\n");
            break;
        }
        printf("Livre trouvé : %s\n", a_liv[livre_trouve].titre);
        printf("Voulez-vous vraiment supprimer ce livre ? (Ah : o / La : n) : ");
        char confirm;
        scanf("%c", &confirm);
        getchar();
        
        if(confirm == 'o' || confirm == 'O')
        {
            for(int i = livre_trouve; i < nb_liv - 1; i++)
            {
                strcpy(a_liv[i].titre, a_liv[i+1].titre);
                strcpy(a_liv[i].auteur, a_liv[i+1].auteur);
                a_liv[i].prix = a_liv[i+1].prix;
                a_liv[i].quantite = a_liv[i+1].quantite;
            }
            cmp--;
            printf("Livre supprimé avec succès !\n");
        }
        else
        {
            printf("Suppression annulée.\n");
        }
        break;
        case 5:
        printf("Le nombre total des livres dans notre stock est %d ",cmp);
        break;
        case 0:
        printf("Merci a vous \n");
        break;
        default:
        printf("Veuillez saisir un valide choix.\n");
        }
    }
    while(b1 != 0);
}
int main(void)
{
    int b1;
    menu(b1);

    return 0;
}