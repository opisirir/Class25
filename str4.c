#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>



int main(int argc, char *argv[]) {
	char yazi1[]="gu";
	char yazi2[]="Gu";
	int fark;
	bool VarMi;
	
 fark=strcmp(yazi1,yazi2);
 printf("%d\n",fark);
 
 char yazi3[]="onurpisirir";
 VarMi=strchr(yazi3,'n');
 printf("gelen deger:%d\n",VarMi);
 
 char eposta[]="onur@isparta.edu.tr";
 VarMi=strstr(eposta,"@isp-arta");
 printf("gelen deger2:%d\n",VarMi);
 
 
	
	return 0;
}
