#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    FILE *dosya;

   dosya=fopen("/Users/honour/Desktop/veriler.txt","w");
    fprintf(dosya,"Bunu dosyaya yazdim.\n");
    fprintf(dosya,"Bunu da dosyaya yazdim. Soyle.");

    fclose(dosya);
    //ek
    dosya=fopen("/Users/honour/Desktop/veriler.txt","a");
    fprintf(dosya,"Bunu ek olarak yazdim.");
    fprintf(dosya,"Sonuna da bu verileri yazdim.");
    fclose(dosya);

    //dosya=fopen("/Users/honour/Desktop/veriler.txt","a");
    //okuma
    dosya=fopen("/Users/honour/Desktop/veriler.txt","r");
    char okuma[400];

    if(dosya==NULL)
    {
        printf("Dosya okunamadi");
        return 1;
    }

    //fgets(okuma,400,dosya);
    //printf("%s\n",okuma);
    //fclose(dosya);


    while(fgets(okuma,sizeof(okuma),dosya)!=NULL)
{
    printf("%s",okuma);
}
fclose(dosya);
  
    

    




    return 0;
}