#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char metin[]="MerhaBalargr45";
	int uzunluk=strlen(metin);
	int i;
	char k;
	bool sadecemetin=true;
	//printf("%d\n",uzunluk);
	
	for(i=0;i<uzunluk;i++)
	{
		k=metin[i];
		if(!((k>='a' && k<='z')||(k>='A' && k<='Z')))
		{
		 sadecemetin=false;
		 break;	
		}	
	}
	if(sadecemetin==true)
	printf("sadece harfler var.\n");
	else
	printf("harfler ve numaralar birlikte");
	
	return 0;
}
