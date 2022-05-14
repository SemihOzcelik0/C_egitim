#include <stdio.h>  //Standart input - output kütüphanesini dahil eder. "printf" "scanf" gibi komutlarla çýktý almamýzý saðlayan kütüphanedir
#include <locale.h>

#define PI 3.2     // Tanýmlamak anlamýna gelen define komutu const gibi kod içerisinde deðiþtirilemeyen atamalar oluþturur. Veri tipini otomatik belirler.

int main(){

int sayi; /* %d */

double a = 3.45;          // double ondalýklý sayýlarýn tanýmlandýðý deðiþkendir (10.basamaða kadar hassasiyet) '%f'
const double pi = 3.14;   // baþýnda const olan bir deðiþken kod içerisinde yeni deðer alamaz deðeri sabitlenir

float yaricap;    // float double gibi ondalýklý sayýlarýn tanýmlandýðý deðiþkendir ancak 6.basaðama kadar hassasiyeti vardýr. '%f'

setlocale(LC_ALL,"Turkish");

/* Printf Fonksiyonu */

printf("Kaan\a");  // '\n' komutu satýr atlamayý saðlar.  '\a' komutu uyarý sesi çýkartýr

printf("Academy\\Galatasaray\n"); // '\t' tab kadar boþluk býrakýr       '\'ý print komutunda yazdýrmak istiyorsak '\\' þeklinde 2 adet koyulur

printf("Dillerin babasý \"C\"\n");  // Týrnak iþareti tarzý þeyleri yazdýrmak için de '\' iþareti kullanýlabilir
printf("%f\n", a);

/* Scanf Fonksiyonu */

printf("Lütfen yaþýnýzý giriniz.\n");
scanf("%d", &sayi);   // scanf fonksiyonu input yani girdi almayý saðlar. -- "%d" ile int deðiþken olduðu tanýmlanýr
printf("Doðum Yýlýnýz %d\n", 2022 - sayi);

/* Çemberin Çevresini Hesaplama Örneði */

printf("Çemberin Yarýçapýný Giriniz. \n");
scanf("%f", &yaricap);
printf("Çemberin çevresi = %f", 2* pi* yaricap);

    return 0;

}
