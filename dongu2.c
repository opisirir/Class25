#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sayac;
	sayac=1;
	
	do{
		printf("%d\n",sayac);
		sayac=sayac+1;
		
		
	}while(sayac<11);
	
	printf("dongu sonu islemleri.");
	return 0;
}
