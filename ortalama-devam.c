#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int ort,devam;
	printf("ortalama giriniz:");
	scanf("%d",&ort);
	
	if(ort>=60)
	{
		//true
		printf("Devamsizlik gir:");
		scanf("%d",&devam);
		if(devam<5)
		{
			//true
			printf("Gectiniz.");
		}
		else
		{
			//false
			printf("Sartli gectiniz.");
		}
	}
	else
	{
		//false
		printf("Kaldiniz!");
	}
	
	getch();
	return 0;
}
