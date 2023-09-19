#include <stdio.h>
#include <stdlib.h>

int main()
{

    int g,tab[10];
    for(int i=0;i<10;i++){

        printf("donner moi un nombre");
        scanf("%d",&tab[i]);
    }


    for(int i=0;i<9;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(tab[i]<tab[j])
            {
                g=tab[i];
                tab[i]=tab[j];
                tab[j]=g;
            }

        }

    }

    for(int i=0;i<10;i++)
    {
        printf("%d\t",tab[i]);
    }




    return 0;
}
