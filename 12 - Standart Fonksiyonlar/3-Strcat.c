#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    char isim[30];
    char meslek[30];
    printf("Lütfen isim ve meslek giriniz..\nÝsim: ");gets(isim);
    printf("Meslek: ");gets(meslek);

    char kullanici[40] = "";     // strcat fonksiyonunun strcpy fonksiyonundan farký, strcpy fonksiyonu diziyi olduðu gibi kopyalayýp içinde veri olsun olmasýn tamamýný deðiþtirecek
    strcat(kullanici,isim);     // þekilde yapýþtýrýrken, strcat fonksiyonu varolan dizinin sonuna ekleme yapar.
    strcat(kullanici, " ");    // Strcat doðrudan diziyi sürdürdüðü için eklenecek ikinci diziden önce bir boþluk ekledik.
    strcat(kullanici, meslek);

    printf("%s\n\n", kullanici);

    // ```````````````````````````````````````````````````````````````````````` Ad Bölüm Örneði ``````````````````````````````````````````````````````````````````````````````````````
    char ad[20] = "Ad: ";
    char bolum[30] = " Bölüm: ";
    char adGir[15];
    char bolumGir[25];
    char ogrenci[50] = "";

    printf("Öðrencinin adýný ve bölümünü giriniz..\n");scanf("%s %s", adGir, bolumGir);
    strcat(ad, adGir);
    strcat(bolum, bolumGir);

    strcat(ogrenci, ad);
    strcat(ogrenci, bolum);

    printf("%s", ogrenci);

    return 0;
}           