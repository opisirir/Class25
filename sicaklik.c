#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sicaklik;
	printf("sicaklik giriniz");
	scanf("%d",&sicaklik);
	
	if(sicaklik>=40)
	{
		printf("Hava cok sicak!");
	}
	else if(sicaklik>=25)
	{
		printf("Hava sicak.");
	}
	else if(sicaklik>10)
	{
		printf("Hava normal.");
	}
	else
	{
		printf("Hava soguk.");
	}
	
	
	getch();
	return 0;
}
