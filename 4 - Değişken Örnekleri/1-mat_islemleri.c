#include <stdio.h>
#include <stdlib.h>

#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int sayi1 = 5;

    sayi1++;
    sayi1 = sayi1 + 1;                                                          // TOPLAMA ÝÞLEMÝ //
    sayi1 += 1;

    printf("Toplama Ýþleminin Sonucu : %d\n", sayi1);

    int sayi2 = 5;

    sayi2--;
    sayi2 = sayi2 - 1;                                                          // ÇIKARMA ÝÞLEMÝ //
    sayi2 -= 1;

    printf("Çýkarma Ýþleminin Sonucu : %d\n", sayi2);

    int sayi3 = 5;

    sayi3 = sayi3 * 1 * 3;                                                      // ÇARPMA ÝÞLEMÝ //
    sayi3 *= 5;

    printf("Çarpma Ýþleminin Sonucu : %d\n", sayi3);

    int sayi4 = 6;

    sayi4 = sayi4 / 1 / 2;                                                      // BÖLME ÝÞLEMÝ //
    sayi4 /= 3;

    printf("Bölme Ýþleminin Sonucu : %d\n", sayi4);

    int sayi5 = 7;

    sayi5 = sayi5 % 4;                                                          // MOD ALMA //
    //sayi5 %= 7;  Kalan bulma anlamýna gelir bu satýrdaki kod da uygundur.

    printf("Mod Almanýn Sonucu : %d\n", sayi5);

    return 0;
}