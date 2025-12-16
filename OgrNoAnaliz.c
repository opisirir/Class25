#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char ogrNo[20]; 
    
    char yil[3];
    char ogretimTuru[2]={0};
    char fakulte[3];
    char bolum[3];
    char sira[4];

    printf("Ogrenci numaranizi giriniz ");
    scanf("%s", ogrNo);

    strncpy(yil, ogrNo, 2);
    strncpy(ogretimTuru, ogrNo + 2, 1);

    printf("Giris Yili:20%s\n", yil);
    printf("Ogretim Turu:%s\n", ogretimTuru);

    if(fakulte=="27")
    {
        printf("Fakulte: Teknoloji Fakultesi\n");
    }
    
   if (strncmp(ogrNo + 3, "27", 2) == 0) 
   {
        printf("Teknoloji Fakultesi\n");
    }
    if (strncmp(ogrNo + 3, "28", 2) == 0) 
   {
        printf("Orman Fakultesi\n");
    }
    if (strncmp(ogrNo + 5, "05", 2) == 0) {
        printf("Bolum: EEM\n");
    }
    printf("Sira No: %s\n", ogrNo + 7);

  
  

    return 0;
}