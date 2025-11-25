#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	
	int x,y;
printf("1. sayiyi giriniz:");scanf("%d",&x);
printf("2. sayiyi giriniz:");scanf("%d",&y);
    //hesapla(3,5);
    //hesapla(45,100);
    //hesapla(45,58);
 hesapla(x,y);
	
	
	
	return 0;
}



void hesapla(int a,int b)
{
	int sonuc;
	
	sonuc=a+b;
	printf("Toplami:%d\n",sonuc);
	sonuc=a*b;
	printf("Carpimi:%d\n",sonuc);
	sonuc=a-b;
	printf("Farki:%d\n",sonuc);
	sonuc=a-b;
	printf("Bolumu:%d\n",sonuc);
	
}

