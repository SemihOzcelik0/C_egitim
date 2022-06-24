#include <stdio.h>
#include <stdlib.h>   // exit fonksiyonu i�in
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");
    int sayi = 1;  //Program�n �al��mas�n� rahatlatmak i�in 1 de�erine e�itledin neye e�itledi�in fark etmez zaten scanf var
    double fak = 1; // 17 fakt�riyel say�s�ndan itibaren 4 byte yani int de�i�keninden fazla yer kaplamaya ba�lad��� i�in 8 byte'l�k dobule de�i�keni kulland�n
    int a = 1;
    printf("Fakt�riyelini ��renmek isteidiniz say�y� giriniz..\n");scanf("%d", &sayi);

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
        printf("Negatif say�lar�n fakt�riyeli al�nmaz..\n");
        exit(0);
    }
    

    printf("%d!: %.0f", girilenSayi, fak);
    return 0;
}