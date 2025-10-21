#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sicaklik;
	
	printf("bir sicaklik degeri giriniz:");
	scanf("%d",&sicaklik);
	
	if(sicaklik>=80)
	{
		// true komutlar çalisir
		printf(" sicalik degeri %d cok yuksek!\n",sicaklik);
		printf("motor asiri isindi");
	}
	else
	{
		// false olan komutlar calisir
		printf("sicaklik degeri %d normal.\n",sicaklik);
		printf("motor normal calisiyor");
	}
	
	return 0;
}
