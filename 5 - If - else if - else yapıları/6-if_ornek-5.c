#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    float sayi1, sayi2, sayi3, kucuk, buyuk, toplam, ortalama, carpim;

    printf("L�tfen 3 farkl� tamsay� de�eri girin.\n");
    scanf("%f %f %f", &sayi1, &sayi2, &sayi3);

    toplam = sayi1 + sayi2 + sayi3;
    ortalama = toplam / 3;
    carpim = sayi1 * sayi2* sayi3;

    kucuk = sayi1;

    if (sayi2 < kucuk)
    {
        kucuk = sayi2;
    }
    if (sayi3 < kucuk)
    {
        kucuk = sayi3;
    }

    buyuk = sayi1;

    if (sayi2 > buyuk)
    {
        buyuk = sayi2;
    }
    if (sayi3 > buyuk)
    {
        buyuk = sayi3;
    }
    
    printf("Toplam: %.0f \n�arp�m: %.0f \nOrtalama: %.2f\nEn k���k say�: %.0f\nEn b�y�k say�: %.0f", toplam, carpim, ortalama, kucuk, buyuk);

    return 0;
}