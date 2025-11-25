#include <stdio.h>
#include <stdlib.h>

void hesapla(){
	
	int x,y,sonuc;
	printf("1. sayiyi giriniz:");scanf("%d",&x);
	printf("2. sayiyi giriniz:");scanf("%d",&y);
	
	sonuc=x+y;
	printf("iki sayi toplami:%d\n",sonuc);
	sonuc=x-y;
	printf("iki sayi farki:%d\n",sonuc);
	sonuc=x*y;
	printf("iki sayi carpimi:%d\n",sonuc);
	
}




int main(int argc, char *argv[]) {
	
	hesapla();
	
	printf("Burasi fonksiyondan sonra\n");

	hesapla();
	
	hesapla();
	return 0;
}
