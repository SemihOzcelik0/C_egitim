#include <stdio.h>
#include <locale.h>
#include <math.h>
// Otomatik olarak tan�ml� gelen bir k�t�phanedir ama yinede dahil etmekte fayda var. Toplama ��karma gibi i�lemler i�in gerekmesede karek�k, �s alma vs. i�lemler i�in gereklidir.

int main()
{
    setlocale(LC_ALL,"Turkish");

    int islem;
    float sayi1, sayi2;

    menu:
    printf("L�tfen yapmak istedi�iniz i�lemi se�iniz\n");
    printf("1.Toplama     2.��karma     3.�arpma     4.B�lme     5.Karek�k Alma     6.Kuvvetini Alma\n");
    printf("��kmak i�in \"-1\" de�erini giriniz.\n--> ");
    scanf("%d", &islem);

    if (islem == -1)
    {
        goto cikis;
    }
    
    if (islem <=6 && islem >= 1)
    {
        printf("L�tfen i�lem yapmak istedi�iniz iki say�y� s�rayla giriniz\n--> ");
        scanf("%f", &sayi1);
        printf("--> ");
        scanf("%f", &sayi2);
    }
    
    switch (islem)
    {
    case 1:
        printf("Toplama i�leminin sonucu: %.2f\n", sayi1 + sayi2);
        break;
    case 2:
        printf("��karma i�leminin sonucu: %.2f\n", sayi1 - sayi2);
        break;
    case 3:
        printf("�arpma i�leminin sonucu: %.2f\n", sayi1 * sayi2);
        break;
    case 4:
        printf("B�lme i�leminin sonucu: %.2f\n", sayi1 / sayi2);
        break;
    case 5:                                                                         // Say�n�n karek�k�n� veya �ss� hesaplan�rken c dilinde olu�turulmu� "math.h" k�t�phanesinden yararlan�l�r.
        printf("%.2f Say�s�n�n Karek�k� = %.2f\n%.2f Say�s�n�n Karek�k� = %.2f\n", sayi1, sqrt(sayi1), sayi2, sqrt(sayi2)); // sqrt() fonksiyonunun i�ine yaz�lan say�n�n karek�k�n� bize yazar.
        break;
    case 6:                                                 // Bir say� �zeri bir say�y� hesaplamak i�in "pow" yani power(kuvvet) fonksiyonu kullan�l�r. �nce taban sonra �s �eklinde girilir.
        printf("%.2f �zeri %.2f = %.2f\n", sayi1, sayi2,pow(sayi1,sayi2));  
        break;
    default:
        printf("L�tfen 1 ile 6 aras�nda bir say� giriniz\n");
        break;
    }

    printf("- - - - - - - - - - - - - - - - - - - -\n");
    goto menu;
    cikis: printf("Program Sonland�...");
    return 0;
}