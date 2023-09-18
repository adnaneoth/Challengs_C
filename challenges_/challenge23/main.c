#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num,s,max=0;
	do{
		printf("Donnez moi un nombre entre 1 et 100: ");
		scanf("%d", &num);
		if(num>100){
			printf("donnez moi un number inferieur a 100\n");
		}else{
			s=s+num;
		if(num>max)
			max = num;
		}

	}while(num!=0);


	printf("La somme des nombres est : %d \n",s);
	printf("Maximun nombres est : %d",max);

    return 0;
}
