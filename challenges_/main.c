#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nom[10],prenom[10],s[7];
    int age,nm;


    printf("donnez moi votre nom :\n");
    scanf("%s",&nom);

    printf("donnez moi votre prenom :\n");
    scanf("%s",&prenom);

    printf("donnez moi votre age :\n");
    scanf("%d",&age);

    printf("donnez moi votre numero :\n");
    scanf("%d",&nm);

    printf("votre Sexe :\n");
    scanf("%s",&s);


    printf("votre nom est : %s , votre prenom est : %s votre age est : %d votre numero est : %d votre genre est : %s",nom,prenom,age,nm,s);


    return 0;
}
