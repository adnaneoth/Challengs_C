#include <stdio.h>
#include <stdlib.h>

int main()
{
    	char  carac;
	printf("Donne un  caractere  : ");
	carac = getchar();
	if(carac<=90 && carac>=65){
		printf(" est un alphabet majuscule ");
	}else{
		printf(" ne pas un alphabet majuscule ");
	}


    return 0;
}
