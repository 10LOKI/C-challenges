#include <stdio.h>
int main(void)
{
    char f_name[20];
    char l_name[20];
    int age;
    char sexe[10];
    char email[20];

    printf("Veuillez saisir vos donnes :\n");
    printf("First name : ");
    scanf("%s",f_name);
    printf("Lasrt name : ");
    scanf("%s",l_name);
    printf("Age : ");
    scanf("%d",&age);
    printf("Email adresss : ");
    scanf("%s",email);
    printf("Sexe : ");
    scanf("%s",sexe);

    printf("\nVos informations sont : \n\n");
    printf("%s\n",f_name);
    printf("%s\n",l_name);
    printf("%d\n",age);
    printf("%s\n",email);
    printf("%s",sexe);


}