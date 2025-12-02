#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]) {
	
	char karsilama[]="Merhaba bu metindir";
	printf("%s\n",karsilama);
	
	char selam[3]={'H','i','!'};
	
	printf("%s\n",selam);
	
	selam[0]='h';
	printf("%s\n",selam);
	selam[1]='o';
	printf("%s\n",selam);
	
	printf("%c\n",karsilama[4]);
	
	//char adsoyad[50];
	//adsoyad[50]="Onur mahmut pisirir";
	char adsoyad2[50]="Onur mahmut pisirir";
	printf("%s\n",adsoyad2);
	
	printf(" ozel karakter\' \\ in\n");
	
	char isimsoyisim[40];
	//printf("ad soyad giriniz:");scanf("%s",isimsoyisim);
	//printf("girdiginiz veri:%s\n",isimsoyisim);
	
	char isim1[50]="Onur";
	char isim2[50]="Mahmut";
	
	isim1[50]=isim2[50];
	printf("%s\n",isim1);
	
	int karaktersay=strlen(isim2);
	printf("%d\n",karaktersay);
	
	char yazi[100];
	fgets(yazi,sizeof(yazi),stdin);
	
	printf("%s\n",yazi);
	
	
	
	
	return 0;
}
