#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main(int argc, char *argv[]) {

    char girilenEposta[50];
    char kontrolEposta[50];
    int uzunluk, i;
    
    bool atIsaretiVar = false, noktaVar = false; 

    printf("E-posta adresinizi giriniz: ");
    scanf("%s", girilenEposta);
    uzunluk = strlen(girilenEposta);

    printf("E-posta adresinizi tekrar giriniz : ");
    scanf("%s", kontrolEposta);

    
    for (i = 0; i < uzunluk; i++) {
       
        if (girilenEposta[i] == '@') {
            atIsaretiVar = true; 
        }
        
        if (girilenEposta[i] == '.') {
            noktaVar = true;
        }
       
    }
    
    if (atIsaretiVar == false || noktaVar == false) {
        printf("Girdiginiz e-posta adresi '@'  veya '.' icermiyor\n");
    } 
    else if (strcmp(girilenEposta, kontrolEposta) != 0) 
    {
        printf("E-postalar eslesmiyor!\n");
    } 
    else {
        printf("E-postalar gecerli.\n");
    }

    return 0;
}