#include<stdio.h>
#include<stdlib.h>

int main() {
    int x,y;  //birden fazla deigskeni yanyana , yardımı ile aynı türden tanımlayabilirsiniz. 

    x=35;
    y=32;
    float sayi=4.56;

    const float pi=3.14;

    char k='A';   //char degiskene 1 karakter atayabilirsiniz. 

    double buyuksayi=345.342100;

    printf("Bu program farkli degiskenlerin degerini ekrana yazar\n");
    
    printf("x degiskeninin degeri:%d\n",x);
    printf("y degiskeninin degeri:%d\n",y);

    printf("sayi degiskeninin degeri:%f\n",sayi); 
    printf("sayi degiskeninin degeri: %.2f\n",sayi);  //bu yazım ile virgülden sonra 2 basamak alcaktır. 

    printf("k degiskeninin degeri:%c\n",k);

    printf("buyuksayi degiskeninin degeri:%lf",buyuksayi);

    printf("\npi degeri:%.2f",pi);


    
    // Dikkat
     pi=23; //bu satır hata verecektir const (sabit) tanımlanmış bir degiskenin degerini değiştirmezsiniz. 


   
    return 0;

}