#include <stdio.h>
#include <stdlib.h>

int main()
{

    for(int i=0;i<10;i++)
    {



   int number = rand()%7+1;
	switch(number){
		case 1 : printf("lundi\n");break;
		case 2 : printf("mardi\n");break;
		case 3 : printf("mercredi\n");break;
		case 4 : printf("jeudi\n");break;
		case 5 : printf("vendredi\n");break;
		case 6 : printf("samedi\n");break;
		case 7 : printf("dimanch\n");break;
	}
}
    return 0;
}
