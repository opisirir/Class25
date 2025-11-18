#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    
    srand(time(NULL));
    int hak=4;
    int tahmin;
    int rastgele = (rand() % 100) + 1;
    printf("Rastgele numara: %d\n", rastgele);

    while(hak > 0) {
        printf("tahmin giriniz: ");
        scanf("%d", &tahmin);
        if(tahmin == rastgele) {
            printf("Tebrikler! Dogru tahmin ettiniz.\n");
            break;
        } else if(tahmin < rastgele) {
            printf("Daha yuksek bir sayi giriniz.\n");
        } else {
            printf("Daha dusuk bir sayi giriniz.\n");
        }
        hak--;
        printf("Kalan hak: %d\n", hak);
    }
    return 0;
}