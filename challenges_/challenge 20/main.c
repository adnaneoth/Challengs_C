#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num,i,r;
	printf("donnez moi un nombre : ");
	scanf("%d",&num);

	for(i=1;i<=10;i++){

            r=num*i;
		printf("%d * %d = %d\n",num,i,r);
	}

    return 0;
}
