#include <stdio.h>
#include <stdlib.h>

int main()
{
   int r,a,b=0;
    printf("Donner un entier positif : ");
    scanf("%d",&a);
    while(a>0)
    {
        r=a%10;
        b=10*b+r;
        a=a/10;
    }
    printf("linverse de %d est : %d\n",a,b);
    return 0;
}
