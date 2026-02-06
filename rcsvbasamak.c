#include<stdio.h>
#include<stdlib.h>

int basamakToplamlar(int x)
{
   if(x<10)
   return x;

   return (x%10)+basamakToplamlar(x/10);

}


int basamakTopla(int x)
{
  int toplam=1;
  while (x>10)
  {
    toplam+=x%10;
    x/=10;
  }
  return toplam;


}

int main(){
int sonuc;
//sonuc=basamakTopla(1234);
sonuc=basamakToplamlar(1234);
printf("toplam:%d",sonuc);


    return 0;
}