#include <stdio.h>
#include <stdlib.h>

int main()
{

    	float  moyene;
	printf("Donne la moyenne d'etudiant  : ");
	scanf("%f",&moyene);
	if(moyene>=16 && moyene<=20) printf("tres bien ");
	else if(moyene>=14 && moyene<16) printf("bien");
	else if(moyene>=12) printf("assez bien");
	else if(moyene>=10 && moyene<12) printf("passable");
	else if (moyene<10) printf("non admis");


    return 0;
}
