	#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int s, alt,ust,sayi;
    int toplam=0;
    
    printf("baslangic giriniz:");scanf("%d",&alt);
    printf("limit giriniz:");scanf("%d",&ust);
    
    for (s=alt; s<ust; s++)
    {
 
        if (s % 2 == 0) 
        {
           toplam+=s;
           continue;
        }
    }
    printf("Girilen cift sayilarin toplami: %d\n", toplam);	
}