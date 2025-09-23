#include <stdio.h>
int main()
{
    int n1 , n2 , n3;
    
    printf("Veuillez saisir les cotes du triangle :\n");
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    
    if((n1 + n2 > n3)||(n2+n3 > n1)||(n1 + n3 > n2))
    {
      if(n1==n2&&n1==n3)
      {
        printf("Le triangle est equilateral \n");
      }
      else if (n1==n2 || n2==n3 || n1==n3)
      {
        printf("le triangle est Isocèle\n");
      }
      else
      {
        printf("le triangle est Scalène\n");
      }
    }
    else
    {
      printf("les trois cotes peuvent pas former un triangle\n");
    }
    return 0;
}
