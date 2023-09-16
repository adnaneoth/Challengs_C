#include <stdio.h>
#include <stdlib.h>

int main()
{
    char  carac;
	printf("Donne un  caractere  : ");
	carac = getchar();
	if((carac<=90 && carac>=65) || (carac<=112 && carac>=97) ){
		if((carac<=90 && carac>=65))
		printf("%c est un alphabet majuscule ",carac);
		else if(carac<=112 && carac>=97)
		printf("%c est un alphabet minuscule ",carac);
	}else{
		printf("%c est pas un alphabet ",carac);
	}
    return 0;
}
