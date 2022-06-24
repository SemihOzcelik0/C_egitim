#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Turkish");

    int sayi1 = 0, sayi2 = 1, toplam1;


    for (int i = 0; i < 10; i++)
    {
        toplam1 = sayi1 + sayi2;
        printf("%d\n", toplam1);        // Fibonacci Sayý dizisi //
        sayi1 = sayi2;
        sayi2 = toplam1;

    }

    for(int i=0; i < 10; i++)
    {
        printf("%d sayýsýnýn karekökü: %.2f\n", i, sqrt(i));    // Karekök yaklaþýk deðer hesaplama //
    }
    
    return 0;
}