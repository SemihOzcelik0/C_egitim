#include <stdio.h>
#include <stdlib.h>   // exit fonksiyonu için
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");
    int sayi = 1;  //Programýn çalýþmasýný rahatlatmak için 1 deðerine eþitledin neye eþitlediðin fark etmez zaten scanf var
    double fak = 1; // 17 faktöriyel sayýsýndan itibaren 4 byte yani int deðiþkeninden fazla yer kaplamaya baþladýðý için 8 byte'lýk dobule deðiþkeni kullandýn
    int a = 1;
    printf("Faktöriyelini öðrenmek isteidiniz sayýyý giriniz..\n");scanf("%d", &sayi);

    int girilenSayi = sayi;
    int faktoriyel = sayi + 1;
    if (sayi > 1)
    {
        while (faktoriyel > 1)         // 5! = 5.4.3.2.1 = 120
        {
        fak = fak * (faktoriyel - a);     
        faktoriyel--;
        }
    }
    else if (sayi == 1 || sayi == 0)
    {
        fak = 1;
    }
    else if (sayi < 0)
    {
        printf("Negatif sayýlarýn faktöriyeli alýnmaz..\n");
        exit(0);
    }
    

    printf("%d!: %.0f", girilenSayi, fak);
    return 0;
}