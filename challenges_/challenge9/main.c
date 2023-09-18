#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("entrer un numero entier\n");
    scanf("%d",&a);

    b=a%2;

    if (b==0)
    { printf("le nombre %d est pair",a);}
    else
        { printf("le nombre %d est impair",a);}

    return 0;
}
