#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main(int argc, char *argv[]) {
	
	//2412705064
	//2412705064@isparta.edu.tr
	
	char isim[50]="Onur";
	char isim2[50]="Mahmut";
	char soyad[50]="Pisirir";
	
	printf("%s\n",isim);
	printf("%s\n",isim2);
	
	strcpy(isim,isim2);
	printf("%s\n",isim);
	
	strcpy(soyad,"yeserir d");
	printf("%s\n",soyad);
	
	strncpy(isim,soyad,4);
	printf("%s\n",isim);
	
	char karsilama[50]="Merhaba";
	char eng[50]=" Hi!";
	
	printf("%s\n",strcat(karsilama,eng));
	printf("%s\n",strcat(karsilama,eng));
	
	
	
	
	
	return 0;
}
