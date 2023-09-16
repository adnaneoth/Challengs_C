#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a,m,j,h,min,s;

    printf("donnez moi le nombre dannee\n");
    scanf("%d",&a);

    m= a *12;
    j=a*365;
    h=j*24;
    min=h*60;
    s=min*60;


    printf("\n %d annee = %d mois \n",a,m);
    printf(" %d annee = %d jours \n",a,j);
    printf(" %d annee = %d heures \n",a,h);
    printf(" %d annee = %d minutes \n",a,min);
    printf(" %d annee = %d secondes \n",a,s);



    return 0;
}
