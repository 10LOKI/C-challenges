#include <stdio.h>
int main(void)
{
    int jj,mm,yy;

    printf("Veuillez saisir une date : \n");
    printf("jj/mm/yyyy\n");
    scanf("%d/%d/%d",&jj,&mm,&yy);

    if(jj<1 || jj > 31 || mm < 0 || mm > 12)
    {
        printf("veuillez saisir une valide date\n");
        return 1;
    }

    switch (mm)
    {
        case 1 :
        printf("%d-Janvier-%d\n",jj,yy);
        break;
        case 2 :
        printf("%d-Fevrier-%d\n",jj,yy);
        break;
        case 3 :
        printf("%d-Mars-%d\n",jj,yy);
        break;
        case 4 :
        printf("%d-April-%d\n",jj,yy);
        break;
        case 5 :
        printf("%d-Mai-%d\n",jj,yy);
        break;
        case 6 :
        printf("%d-Juin-%d\n",jj,yy);
        break;
        case 7 :
        printf("%d-Juillet-%d\n",jj,yy);
        break;
        case 8 :
        printf("%d-Aout-%d\n",jj,yy);
        break;
        case 9 :
        printf("%d-Septembre-%d\n",jj,yy);
        break;
        case 10 :
        printf("%d-Octobre-%d\n",jj,yy);
        break;
        case 11 :
        printf("%d-November-%d\n",jj,yy);
        break;
        case 12 :
        printf("%d-Decembre-%d\n",jj,yy);
        break;
        default :
        printf("invalid input\n");
    }
    return 0;
}