#include <stdio.h>
#include <stdlib.h>

#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int sayi1 = 5;

    sayi1++;
    sayi1 = sayi1 + 1;                                                          // TOPLAMA ��LEM� //
    sayi1 += 1;

    printf("Toplama ��leminin Sonucu : %d\n", sayi1);

    int sayi2 = 5;

    sayi2--;
    sayi2 = sayi2 - 1;                                                          // �IKARMA ��LEM� //
    sayi2 -= 1;

    printf("��karma ��leminin Sonucu : %d\n", sayi2);

    int sayi3 = 5;

    sayi3 = sayi3 * 1 * 3;                                                      // �ARPMA ��LEM� //
    sayi3 *= 5;

    printf("�arpma ��leminin Sonucu : %d\n", sayi3);

    int sayi4 = 6;

    sayi4 = sayi4 / 1 / 2;                                                      // B�LME ��LEM� //
    sayi4 /= 3;

    printf("B�lme ��leminin Sonucu : %d\n", sayi4);

    int sayi5 = 7;

    sayi5 = sayi5 % 4;                                                          // MOD ALMA //
    //sayi5 %= 7;  Kalan bulma anlam�na gelir bu sat�rdaki kod da uygundur.

    printf("Mod Alman�n Sonucu : %d\n", sayi5);

    return 0;
}