#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sayac,adet,ort,toplam;
	toplam=0;adet=0;
	
	for(sayac=5;sayac<555;sayac++)
	{
		if(sayac%2==0)
		{
			adet++; //adet+=adet;
			toplam+=sayac; //toplam=toplam+sayac
			ort=toplam/adet;
		}
		
	}
	
	printf("5 ile 555 arasinda %d adet cift sayi vardir\n",adet);
	printf("Toplamlari:%d Ortalamasi:%d",toplam,ort);
	