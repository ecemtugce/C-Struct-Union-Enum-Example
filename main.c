#include<stdio.h>
int main() {
  typedef struct {
   char ad[30];
   char soyad[30];
   int yas;
  }bilgi;

  typedef union{
   int sayisal;
   char harfnotu[4];
  }not;

  typedef enum{
   harfnotu=1,
   sayisalnot=2
  }notsecim;

  typedef struct{
      bilgi genel;
      not not;
      notsecim notsecim;
  }ogrenci;

  ogrenci a;
  printf("ogrencinin adini giriniz= ");
  scanf("%s",a.genel.ad);
  printf("ogrencinin soyadini giriniz= ");
  scanf("%s",a.genel.soyad);
   printf("ogrencinin yasini giriniz= ");
   scanf("%d",&a.genel.yas);
  printf("hangi harf sisteminde notunu girmek istiyorsunuz=\n");
  printf("harf notu =1\n");
  printf("sayisal notu =2\n");
  scanf("%d",&a.notsecim);
  if(a.notsecim==harfnotu){
   printf("harf notunu giriniz=");
   scanf("%s",a.not.harfnotu);
  printf("adi= %s\n soyadi= %s\n yasi= %d\n notu= %s",a.genel.ad,a.genel.soyad,a.genel.yas,a.not.harfnotu);
  }
  else{
   printf("notu giriniz=");
   scanf("%d",&a.not.sayisal);
    printf("adi= %s\n soyadi= %s\n yasi= %d\n notu= %d",a.genel.ad,a.genel.soyad,a.genel.yas,a.not.sayisal);
  }
}
