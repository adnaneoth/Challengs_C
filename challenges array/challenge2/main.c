#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int x=0,y=3200000,tab[10];


    for(int i=1;i<=10;i++)
    {

      printf("donnez moi un nombre\n");
      scanf("%d",&tab[i]);

      if (x<tab[i])
      {
          x=tab[i];
      }
       if (y>tab[i])
      {
          y=tab[i];
      }

    }

    printf("le nembre plus grande est %d\n",x);
    printf("le nembre plus petit est %d\n",y);









    return 0;
}
