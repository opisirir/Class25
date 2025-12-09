#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void hesapla(int n,int* kare, double* karekok)
{
	*kare=n*n;
	*karekok=sqrt(n);
	
}


int main(int argc, char *argv[]) {
	
	int sayi=81;
	int kare; 
	double karekok;
	
	printf("sayi:%d\n",sayi);
	
	
	printf("karesi:%d\t koku:%f\n",kare,karekok);	
	
	hesapla(sayi,&kare,&karekok);
	printf("karesi:%d\t koku:%f\n",kare,karekok);
	
	
	
	
	getch();
	return 0;
}
