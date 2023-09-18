#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i,test=1;
	printf("Donne moi un nombre : ");
	scanf("%d", &num);
    if(num<=1){
       test =0;
	}
	else
        for(i=2;i<=num/2;i++)	{
		if(num %i==0){
			test =0;
	    	break;
		}
	}
    if(test==1)	{
	printf("%d est un nombre premier",num);
	} else	printf("%d est un nombre non premier",num);

    return 0;
}
