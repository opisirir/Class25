#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sayac,ctoplam;
	ctoplam=0;
	
	for(sayac=0;sayac<10;sayac++)
	{
		if(sayac%2==0)
		{
			ctoplam=ctoplam+sayac;
		}
	}
	
	printf("Cift sayilarin toplami:%d\n",ctoplam);
	
	return 0;
}
