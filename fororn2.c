#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,y;
	
	/*for(i=0;i<3;i=i+1)
	{
		printf("Onur\n");	
	}*/
	i=0;
	for(;i<5;)
	{
	
	   printf("Onur\n");
	   ++i;
	   y=i;
	   printf("gelen:%d\n",y);
	}
	
	printf(" sayac degeri:%d\n",i);
	
	
	
	
	return 0;
}
