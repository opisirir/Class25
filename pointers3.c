#include <stdio.h>
#include <stdlib.h>

void degistir(int *x, int *y){
	int gecici=*x;
	*x=*y;
	*y=gecici;
}

int main(int argc, char *argv[]) {
	int a=10;
	int b=20;
	
	printf("a degeri:%d\t b degeri:%d\n",a,b);
	degistir(&a,&b); //0x000000000062FE30

	printf("a yeni degeri:%d\t b yeni degeri:%d\n",a,b);
	
	
	
	
	
	
	getch();
	return 0;
}
