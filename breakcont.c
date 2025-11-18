#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sayac;
	
	/*
	for(sayac=10;sayac>0;sayac--)
	{
		printf("%d\n",sayac);
	}*/
	
	/*
	for(sayac=1;sayac<15;sayac++)
	{
		printf("%d\n",sayac);
		if(sayac%2==0)
		{
			printf("Dongu burada duracak!");
			break;
		}
		
	}*/
	
	for(sayac=1;sayac<15;sayac++)
	{
	printf("%d\n",sayac);
	    if(sayac==10)
		{
			printf("Devam edecek\n");
			continue;
			}	
		
		
	}
	
	
	printf("dongu sonrasi");

	return 0;
}
