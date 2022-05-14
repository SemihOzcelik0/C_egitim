#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int sayi1,sayi2,sayi3;

    sayi1 = 5;                      
    sayi2 = sayi1++;                // Sayý 2'yi sayý 1'e eþitle ve sayý 1'e bir ekle anlamýna gelir. Kod eþittirin saðýndan okunur ve iþlem sýrasýna göre ilerler.
    sayi3 = ++sayi1;               // Sayi 1 önceki satýrda bir artarak 6'ya eþitlendi. Þimdi ise önce sayý 1'e bir ekleyip sonra sayý 3'e eþitlenecek.
    
    printf("Sayý 1: %d Sayý 2 : %d Sayý 3 : %d", sayi1, sayi2, sayi3);

    return 0;
}