#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sonuc,sayi;
	
	do{
		printf("sayi giriniz:");
		scanf("%d",&sayi);
		sonuc=pow(sayi,2);
		printf("%d sayisinin karesi:%d  ",sayi,sonuc);
		
	}while(sayi!=0);
	
	
	printf("Dongu bitti.");
	return 0;
}
