#include <stdio.h>
#include <stdlib.h>
#include <math.h> //burasi matematik kutuphanesini cagirir.

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int secim;
	const float pi=3.142;
	
	float a,b,alan,cevre;
	printf("Programa Hosgeldiniz lutfen bir secim yapiniz\n");
	printf("Kare(1)\tDikdortgen(2)\tUcgen(3)\tCember(4)\t Secim:");
	scanf("%d",&secim);
	
	//pi=489;
	
	if(secim==1)
	{
		printf("Bir kenar uzunlugu giriniz:");
		scanf("%f",&a);
		alan=pow(a,2);
		cevre=4*a;    //alan=a*a;
		printf("%.0f kenarli karenin cevresi:%.1f alani:%.1f",a,cevre,alan);
	}
	else if(secim==2)
	{
		printf("kisa kenar giriniz:");
		scanf("%f",&a);
		printf("uzun kenar giriniz:");
		scanf("%f",&b);
		alan=a*b;
		cevre=(a+b)*2;    
		printf("%.0f kisa kenarli %.0f uzun kenarli dikdortgenin cevresi:%.1f alani:%.1f",a,b,cevre,alan);
	}
	else if(secim==3)
	{
		printf("taban giriniz:");
		scanf("%f",&a);
		printf("yukseklik giriniz:");
		scanf("%f",&b);
		alan=(a*b)/2;  
		printf("%.0f tabanli %.0f yukseklikli ucgenin alani:%.1f",a,b,alan);
	}
	else if(secim==4)
	{
		printf("yaricap giriniz:");
		scanf("%f",&a);
		cevre=2*pi*a;
		alan=pi*pow(a,2);
		printf("%.0f yaricapli cemberin cevresi:%1.f alani:%.1f",a,cevre,alan);
	}
	else 
	{
		printf("1-4 arasinda secim yapmadiniz!!11bir1!");
	}
	
	
	return 0;
}
