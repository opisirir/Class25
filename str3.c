#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main(int argc, char *argv[]) {
		//24127854
	//24127084@isparta.edu.tr
	char ogreposta[50];
	char ogrencino[50];
	char ek[50]="@isparta.edu.tr";
	
	printf("Ogrenci no giriniz:");scanf("%s",ogrencino);
	printf("%s\n",strcat(ogrencino,ek));
	
	
	printf("*****************************\n");
	strcpy(ogreposta,ogrencino);
	strcat(ogrencino,ek);
	printf("%s\n",ogreposta);
	return 0;
}
