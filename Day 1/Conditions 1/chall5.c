#include <stdio.h>
int main(void)
{
    int year , month , day , hour , min , sec;

    printf("Veuillez saisir l'année que vous voulez :\n");
    scanf("%d",&year);

    int choix;
        printf("Veuillez saisir un choix :\n");
        printf("1 . Convertir en Mois\n");
        printf("2 . Convertir en Jours\n");
        printf("3 . Convertir en Heures\n");
        printf("4 . Convertir en Minutes\n");
        printf("5 . Convertir en Secondes\n");
        printf("0 . Exit\n");
        scanf("%d",&choix);
    switch (choix)
    {
    case 1:
        month = year * 12;
        printf("%d years = %d months\n",year,month);
    break;
    case 2:
        day = year * 365;
        printf("%d years = %d days\n",year,day);
    break;
    case 3:
        hour = year * 8766;
        printf("%d years = %d hours\n",year,hour);
    break;
    case 4:
        min = year * 525960;
        printf("%d years = %d mins\n",year,min);
    break;
    case 5:
        sec = year * 31557600;
        printf("%d years = %d secondes\n",year,sec);
    break;
    case 0:
    return 1;
    break;
    default:
    printf("Veuillez saisir un valide choix\n");
    }
    return 0;
}