#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int sayi1,sayi2,sayi3;

    sayi1 = 5;                      
    sayi2 = sayi1++;                // Say� 2'yi say� 1'e e�itle ve say� 1'e bir ekle anlam�na gelir. Kod e�ittirin sa��ndan okunur ve i�lem s�ras�na g�re ilerler.
    sayi3 = ++sayi1;               // Sayi 1 �nceki sat�rda bir artarak 6'ya e�itlendi. �imdi ise �nce say� 1'e bir ekleyip sonra say� 3'e e�itlenecek.
    
    printf("Say� 1: %d Say� 2 : %d Say� 3 : %d", sayi1, sayi2, sayi3);

    return 0;
}