#include <stdio.h>
#include <stdlib.h>

int somme(int a,int b){

int c=a+b;

return c;
}


int main()
{
    int a,b;
    printf("donner moi un nombre:\n");
    scanf("%d",&a);

     printf("donner moi un autre nombre:\n");
    scanf("%d",&b);




    printf("la somme est:%d",somme(a,b));


    return 0;
}
