#include <stdio.h>  //Standart input - output k�t�phanesini dahil eder. "printf" "scanf" gibi komutlarla ��kt� almam�z� sa�layan k�t�phanedir
#include <locale.h>

#define PI 3.2     // Tan�mlamak anlam�na gelen define komutu const gibi kod i�erisinde de�i�tirilemeyen atamalar olu�turur. Veri tipini otomatik belirler.

int main(){

int sayi; /* %d */

double a = 3.45;          // double ondal�kl� say�lar�n tan�mland��� de�i�kendir (10.basama�a kadar hassasiyet) '%f'
const double pi = 3.14;   // ba��nda const olan bir de�i�ken kod i�erisinde yeni de�er alamaz de�eri sabitlenir

float yaricap;    // float double gibi ondal�kl� say�lar�n tan�mland��� de�i�kendir ancak 6.basa�ama kadar hassasiyeti vard�r. '%f'

setlocale(LC_ALL,"Turkish");

/* Printf Fonksiyonu */

printf("Kaan\a");  // '\n' komutu sat�r atlamay� sa�lar.  '\a' komutu uyar� sesi ��kart�r

printf("Academy\\Galatasaray\n"); // '\t' tab kadar bo�luk b�rak�r       '\'� print komutunda yazd�rmak istiyorsak '\\' �eklinde 2 adet koyulur

printf("Dillerin babas� \"C\"\n");  // T�rnak i�areti tarz� �eyleri yazd�rmak i�in de '\' i�areti kullan�labilir
printf("%f\n", a);

/* Scanf Fonksiyonu */

printf("L�tfen ya��n�z� giriniz.\n");
scanf("%d", &sayi);   // scanf fonksiyonu input yani girdi almay� sa�lar. -- "%d" ile int de�i�ken oldu�u tan�mlan�r
printf("Do�um Y�l�n�z %d\n", 2022 - sayi);

/* �emberin �evresini Hesaplama �rne�i */

printf("�emberin Yar��ap�n� Giriniz. \n");
scanf("%f", &yaricap);
printf("�emberin �evresi = %f", 2* pi* yaricap);

    return 0;

}
