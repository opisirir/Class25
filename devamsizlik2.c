#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int v,f,devam;
	float ort;
	
	printf("vize giriniz:");scanf("%d",&v);
	printf("final giriniz:");scanf("%d",&f);
	printf("devamsizliginiz kac gun?");scanf("%d",&devam);
	
	ort=(v*0.4)+(f*0.6);
	
	if(ort>=60&&f>=45&&devam<5)
	{
		printf("Ortalamaniz:%.2f",ort);
		printf("Dersten gectiniz");
	}

	else
	{
		printf("Ortalamaniz:%.2f",ort);
		printf("Dersten kaldiniz!");
	}

	
	
	
	
	
	getch();
	return 0;
}

