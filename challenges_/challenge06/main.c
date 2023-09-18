#include <stdio.h>
#include <stdlib.h>

const p=3.14;
int main()
{
    float r,b;

    printf("donnez moi le rayon du cercle!\n");
    scanf("%f",&r);

    b=2*p*r;

    printf("\nla circonference du cercle est : %.2f\n",b);


    return 0;
}
