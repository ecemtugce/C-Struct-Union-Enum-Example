# Öğrenci Bilgi Sistemi - C Örneği

Bu proje, C dilinde `struct`, `union` ve `enum` kavramlarını bir arada kullanarak basit bir **öğrenci bilgi sistemi** örneği sunar. Kullanıcıdan öğrencinin bilgilerini alır ve not sistemine göre doğru şekilde saklayıp ekrana yazdırır.

---

## Özellikler

- **Struct (`bilgi`)**: Öğrencinin adı, soyadı ve yaşı.  
- **Union (`not`)**: Öğrencinin not bilgisi; ya sayısal (`int`) ya da harf notu (`char[4]`) tutulabilir.  
- **Enum (`notsecim`)**: Kullanıcının not sistemini seçmesini sağlar (`harfnotu` veya `sayisalnot`).  
- **Struct (`ogrenci`)**: Yukarıdaki tüm yapıları birleştirir.

---

## Kullanım

1. Program çalıştırılır.
2. Kullanıcıdan öğrencinin:
   - Adı
   - Soyadı
   - Yaşı
   - Not sistemi (1: Harf notu, 2: Sayısal not) bilgileri alınır.
3. Seçilen not sistemine göre:
   - Harf notu girilirse `union` içindeki `harfnotu` alanına kaydedilir.
   - Sayısal not girilirse `union` içindeki `sayisal` alanına kaydedilir.
4. Program, girilen tüm bilgileri ekrana yazdırır.

---

## Örnek Çalıştırma

ogrencinin adini giriniz= Ahmet

ogrencinin soyadini giriniz= Yılmaz

ogrencinin yasini giriniz= 20

hangi harf sisteminde notunu girmek istiyorsunuz=

harf notu =1

sayisal notu =2

1
harf notunu giriniz= AA
adi= Ahmet
soyadi= Yılmaz
yasi= 20
notu= AA

ogrencinin adini giriniz= Elif

ogrencinin soyadini giriniz= Demir

ogrencinin yasini giriniz= 22

hangi harf sisteminde notunu girmek istiyorsunuz=

harf notu =1

sayisal notu =2
2
notu giriniz= 85
adi= Elif
soyadi= Demir
yasi= 22
notu= 85


---

## Notlar

- Union sayesinde, öğrenci için sadece ilgili not türü saklanır.  
- Bu örnek, C dilinde **struct–union–enum kullanımını göstermek** için idealdir.  
- `scanf` ile string girişlerde dizinin boyutunu aşmamak için sınır koymak önerilir (`%29s` gibi).

---

## Dosya

- `ogrenci_not_sistemi.c` – C programının kaynak kodu.


