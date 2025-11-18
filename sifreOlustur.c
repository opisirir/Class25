#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
     srand(time(NULL));
    char karakterler[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J',
                        'K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',
                        'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t',
                        'u','v','w','x','y','z','!','#','$','%','&'};
    int elemansay= sizeof(karakterler) / sizeof(karakterler[0]);
    int rastgele,i,karaktersay;
       printf("Kac karakterli sifre olusturulsun? ");
       
    scanf("%d",&karaktersay);
    
    for (i = 0; i < karaktersay; i++)
    {
        rastgele = rand() % (elemansay);
        printf("%c", karakterler[rastgele]);
    }

    return 0;
}