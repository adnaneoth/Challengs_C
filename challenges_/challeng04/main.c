#include <stdio.h>
#include <stdlib.h>

int main()
{

    float a,b,c,d,r,m;

    printf("tapez le premier nombre\n");
    scanf("%f",&a);

     printf("tapez la deuxieme nombre\n");
    scanf("%f",&b);

     printf("tapez la troisieme nombre\n");
    scanf("%f",&c);

     printf("tapez la quatrieme nombre\n");
    scanf("%f",&d);


    r=a+b+c+d;
    m=r/4;


    printf("\nla somme de quatre nombres est : %.2f\n",r);

    printf("\nla moyenne de quatre nombres est : %.2f\n",m);






    return 0;
}
