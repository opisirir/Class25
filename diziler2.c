#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
    int sayilar[]={10,12,25,48,77,99,345,578,45,7889,43,667,34,56.33};
	printf("%d\n",sayilar[1]);
	
	sayilar[1]=20;
	
	printf("%d\n",sayilar[1]);
	printf("%d\n",sayilar[14]);
	
    int sayilar2[3];
	sayilar2[0]=23;
	sayilar2[1]=44;
	sayilar2[2]=56;
	sayilar2[3]=34;
	
	printf("sayilar 2 dizisi:%d\n",sayilar2[3]);
	
	int diziBuyuklugu=sizeof(sayilar);
	
	printf("Sayilar dizisinin boyutu:%d\n",diziBuyuklugu);
	
	int diziElemanSayisi=sizeof(sayilar)/sizeof(sayilar[0]);
	printf("sayilar dizisi eleman sayisi:%d\n",diziElemanSayisi);
	
	return 0;
}
