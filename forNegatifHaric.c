#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    
   int s,sayi;
   int toplam=0;
   for (s=0;s<5;s++)
   {
   printf("pozitif bir sayi giriniz:");scanf("%d",&sayi);
   if(sayi<0)
   {
   	printf("negatif sayi girmeyiniz!");
   	s--;
   	continue;
   }
   toplam+=sayi;
   

   }
   printf("%d sayinin toplami:%d",s,toplam);
   
   printf("Dongu sonrasi komutlar");
	getch();
	return 0;
}