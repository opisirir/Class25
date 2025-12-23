#include <stdio.h>
#include <stdlib.h>

int main() {
    int ogrenciSay;
    int *notlar;
    int enYuksek;

    
    printf("Toplam ogrenci sayisini girin: ");
    scanf("%d", &ogrenciSay);
    notlar = (int*)malloc(ogrenciSay * sizeof(int));
    

    
    if (notlar == NULL) {
        printf("Bellek ayirma basarisiz oldu.\n");
        exit(1); 
    }

    for (int i = 0; i < ogrenciSay; i++)
     {
         printf("%d. ogrencinin notunu girin:\n",i+1);
         scanf("%d", &notlar[i]);

          if (i == 0) {
            enYuksek = notlar[i];
        } else {
            if (notlar[i] > enYuksek) {
                enYuksek = notlar[i];
            }
        }

        }

    printf("******** Girilen Notlar ******\n");
    for (int i = 0; i < ogrenciSay; i++) {
        printf("Ogrenci %d: %d\n", i + 1, notlar[i]);
    }

    printf("Ek not girmek istiyor musunuz? (E/H): ");
    char cevap;    
    scanf(" %c", &cevap);

    if (cevap == 'E' || cevap == 'e') {

        printf("Kac adet not gireceksiniz? ");
        int yeniNot,yeniNotSay;
        scanf("%d", &yeniNotSay);
        notlar = (int*)realloc(notlar, ogrenciSay+yeniNotSay * sizeof(int));
        if (notlar == NULL) {
            printf("Bellek ayirma basarisiz oldu.\n");
            exit(1); 
        }
        for (int i = 0; i < yeniNotSay; i++) {
            printf("%d. notu girin: ", i + 1);
            scanf("%d", &yeniNot);
            notlar[ogrenciSay + i] = yeniNot;
        }
             ogrenciSay += yeniNotSay;
        if (yeniNot > enYuksek) 
             enYuksek = yeniNot;
        
    }

    printf("En yuksek not: %d\n", enYuksek);
    
    free(notlar);
    
    
    return 0;
}