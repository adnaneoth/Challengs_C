#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j,m,a;
	printf("donne une date : ");
	scanf("%d/%d/%d",&j,&m,&a);
	switch(m){
		case 1 : printf("la date est : %d/Janvier/%d ",j,a);break;
		case 2 : printf("la date est : %d/fevrier/%d ",j,a);break;
		case 3 : printf("la date est : %d/mars/%d ",j,a);break;
		case 4 : printf("la date est : %d/avril/%d ",j,a);break;
		case 5 : printf("la date est : %d/mai/%d ",j,a);break;
		case 6 : printf("la date est : %d/juin/%d ",j,a);break;
		case 7 : printf("la date est : %d/juillet/%d ",j,a);break;
		case 8 : printf("la date est : %d/août/%d ",j,a);break;
		case 9 : printf("la date est : %d/septembre/%d ",j,a);break;
		case 10 : printf("la date est : %d/octobre/%d ",j,a);break;
		case 11 : printf("la date est : %d/novembre /%d ",j,a);break;
		case 12 : printf("la date est : %d/décembre /%d ",j,a);break;
		default   : printf("la date incorect ");break;

	}

    return 0;
}
