#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int sayac,sayi,toplam,ort;
	sayac=0;
	toplam=0;
	
	while(sayac<5)
	{ //true
		printf("sayi giriniz:");
		scanf("%d",&sayi);
		toplam=toplam+sayi;
		sayac++; // -> sayac=sayac+1;
	 } //true bitti
	 
	 //false
	 printf("sayilarin toplami:%d",toplam);
	return 0;
}
