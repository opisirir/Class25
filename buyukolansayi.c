#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	
	printf("1. sayiyi giriniz:");scanf("%d",&a);
	printf("2. sayiyi giriniz:");scanf("%d",&b);
	printf("3. sayiyi giriniz:");scanf("%d",&c);
	
	if(a>b&&a>c)
		printf("%d sayisi en buyuktur.",a);
	if(b>c&&b>a)
		printf("%d sayisi en buyuktur.",b);
	if(c>b&&c>a)
		printf("%d sayisi en buyuktur.",c);
	
	getch();
	return 0;
}
