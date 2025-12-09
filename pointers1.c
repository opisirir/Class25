#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x=10;
	x=20;
	x=30;
	
	printf("x\'in degeri:%d\n",x);
	
	int *ptr1;
	int* ptr2;
	
	ptr1=&x;
	printf("ptr1\'in degeri:%d\n",ptr1);
	printf("ptr1\'in gosterdigi adres:%p\n",ptr1);
	
	int not=85;
	ptr2=&not;
	printf("ptr2\'in degeri:%d\n",ptr2);
	printf("ptr2\'in gosterdigi adres:%p\n",ptr2);
	
	int sayilar[]={45,36,87,125,24};
	
	int* ptr3;
	
	ptr3=sayilar;
	
	printf("ptr3\'ten gelen:%d\n",ptr3);
	printf("ptr3\'ten gelen:%p\n",ptr3);
	
	printf("dizi adresteki deger:%d\n",*ptr3);
	
	/*
	printf("ptr3\'ten gelen:%p\n",ptr3+1);
	printf("dizi adresteki deger:%d\n",*(ptr3+1));
	
		printf("ptr3\'ten gelen:%p\n",ptr3+2);
	printf("dizi adresteki deger:%d\n",*(ptr3+2));
	*/
	
	ptr3++;
	printf("++ ptr3\'ten gelen:%p\n",ptr3);
	printf(" ++ dizi adresteki deger:%d\n",*(ptr3));
	
	ptr3++;
	printf("++ ptr3\'ten gelen:%p\n",ptr3);
	printf(" ++ dizi adresteki deger:%d\n",*(ptr3));
	
	ptr3--;
	printf("++ ptr3\'ten gelen:%p\n",ptr3);
	printf(" ++ dizi adresteki deger:%d\n",*(ptr3));
	return 0;
}
