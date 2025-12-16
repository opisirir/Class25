#include <stdio.h>
#include <stdlib.h>


void degistir(int x, int y){
	int gecici;
	gecici=x;
	x=y;
	y=gecici;
	
}


int main(int argc, char *argv[]) {
	
int a,b;
a=10;  //20
b=20;	//10


printf("a degeri:%d\tb degeri:%d\n",a,b);
degistir(a,b);
printf("a degeri:%d\tb degeri:%d\n",a,b);
	
	
	getch();
	return 0;
}
