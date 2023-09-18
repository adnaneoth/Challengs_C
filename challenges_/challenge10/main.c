#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a;
    printf("tapez un caractere ");
    //scanf(" %c",&a);
    a=getchar();
    switch(a){

case 'a':printf("le caracters %c est une voyelle",a); break;
case 'o': printf("le caracters %c est une voyelle",a); break;
case 'u': printf("le caracters %c est une voyelle",a); break;
case 'i':printf("le caracters %c est une voyelle",a); break;
case 'e': printf("le caracters %c est une voyelle",a); break;
case 'y': printf("le caracters %c est une voyelle",a); break;
default: printf("le caracters %c est non voyelle",a); break;


    }


    return 0;
}
