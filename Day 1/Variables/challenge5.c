#include <stdio.h>
int main(void){
    float C ;

    printf("Veuillez saisir la temperature en celcius :\n");
    scanf("%f",&C);

    if(C < 0)
    {
        printf("L'etat de l'eau est solide \n");
    }
    else if (C < 100 && C >= 0)
    {
        printf("L'etat de l'eau est liquide \n");
    }
    else
    {
        printf("l'Etat de l'eau est gaz \n");
    }
    
    return 0;
}