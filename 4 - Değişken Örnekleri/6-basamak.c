#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int sayi, onbinler, binler, yuzler, onlar, birler;

    printf("5 basamakl� bir say� giriniz..\n\a");
    scanf("%d", &sayi);

    onbinler = sayi / 10000; //Say�n�n onbinler basama��n� bulmak i�in 10.000'e b�l�yoruz ve veri tipi integer oldu�u i�in virg�lden sonraki k�s�m g�r�lm�yor ve istedi�imiz de�ere ula��yoruz.
    binler = (sayi % 10000) / 1000;
    yuzler = (sayi % 1000) / 100 ;
    onlar = (sayi % 100) / 10 ;
    birler = (sayi % 10) /1;

    printf("%d     %d     %d     %d     %d", onbinler, binler, yuzler, onlar,birler);

    return 0;
}