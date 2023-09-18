#include <stdio.h>
#include <stdlib.h>

int main()
{

    for(int i=0;i<10;i++)
    {



   int num = rand()%6;
	switch(num){
		case 0 : printf("lundi\n");
		break;
		case 1 : printf("mardi\n");
		break;
		case 2 : printf("mercredi\n");
		break;
		case 3 : printf("jeudi\n");
		break;
		case 4 : printf("vendredi\n");
		break;
		case 5 : printf("samedi\n");
		break;
		case 6 : printf("dimanch\n");
		break;
	}
}
    return 0;
}
