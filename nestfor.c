#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i,j;
	int sonuc=1;
	
	for(i=0;i<5;i++)
	{
		printf("i:%d degiskenli dongu\n",i);
		
		for(j=10;j>0;j--)
		{
			printf("j icinde gelen deger:%d\n",j);
			sonuc=i*j;
			printf("sonuc:%d\n",sonuc);
		}
		
		printf("i degiskeni icin");
	}
	
	printf("tum donguler bitti\n");
	
	
	return 0;
}
