#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[200],i=0,s=0,m,c;

    do
    {


        printf("saisir un note entre 0 et 20\n");
        scanf("%d",&tab[i]);

        if (tab[i]==0)
        {
            printf("saisir un note superieur a 0\n");
        }
        else
        {
            if(tab[i]<=20){

                s+=tab[i];
            }
            i++;

        }

    }
    while(tab[i-1]<=20&&tab[i-1]>=0);

c=i-1;



    m=s/(i-1);

printf("\nles nombres des notes saisies est :%d\n",c);
printf("\nla moyenne est :%d\n",m);


             for(i=0;i<c;i++)
           {
                       if(tab[i]<m){
                        printf("\n%d < %d",tab[i],m);
                       }

                        else if(tab[i]==m){
                        printf("\n%d = %d",tab[i],m);
                        }
                        else if(tab[i]>m){
                        printf("\n%d > %d",tab[i],m);
                        }
           }























    return 0;
}
