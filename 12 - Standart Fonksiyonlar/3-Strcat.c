#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    char isim[30];
    char meslek[30];
    printf("L�tfen isim ve meslek giriniz..\n�sim: ");gets(isim);
    printf("Meslek: ");gets(meslek);

    char kullanici[40] = "";     // strcat fonksiyonunun strcpy fonksiyonundan fark�, strcpy fonksiyonu diziyi oldu�u gibi kopyalay�p i�inde veri olsun olmas�n tamam�n� de�i�tirecek
    strcat(kullanici,isim);     // �ekilde yap��t�r�rken, strcat fonksiyonu varolan dizinin sonuna ekleme yapar.
    strcat(kullanici, " ");    // Strcat do�rudan diziyi s�rd�rd��� i�in eklenecek ikinci diziden �nce bir bo�luk ekledik.
    strcat(kullanici, meslek);

    printf("%s\n\n", kullanici);

    // ```````````````````````````````````````````````````````````````````````` Ad B�l�m �rne�i ``````````````````````````````````````````````````````````````````````````````````````
    char ad[20] = "Ad: ";
    char bolum[30] = " B�l�m: ";
    char adGir[15];
    char bolumGir[25];
    char ogrenci[50] = "";

    printf("��rencinin ad�n� ve b�l�m�n� giriniz..\n");scanf("%s %s", adGir, bolumGir);
    strcat(ad, adGir);
    strcat(bolum, bolumGir);

    strcat(ogrenci, ad);
    strcat(ogrenci, bolum);

    printf("%s", ogrenci);

    return 0;
}           