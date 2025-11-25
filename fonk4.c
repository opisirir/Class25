#include <stdio.h>
#include <stdlib.h>

int kareHesapla(int a)
{
	int sonuc;
	sonuc=a*a;
	//printf("%d\n",sonuc);
	return sonuc; //25   //16
}

int dikdortgen(int a,int b)
{ 
      int dalan=a*b;
      return dalan; //20
}




int main(int argc, char *argv[]) {
	
	int alan,alan2,x,y;
	alan=kareHesapla(5);//25
	alan2=kareHesapla(4);//16
	printf("fonksiyondan gelen deger:%d\n",alan);
	printf("fonksiyondan gelen 2. deger:%d\n",alan2);
	
	printf("yazilan ile gelen:%d\n",kareHesapla(8));
	printf("yazilan ile gelen:%d\n",kareHesapla(10));
	
	printf("dikdortgen hesabi icin kisa uzun kenar giriniz:");
	scanf("%d %d",&x,&y);
	printf("dikdortgen alan:%d",dikdortgen(x,y)); //20
	return 0;
}
