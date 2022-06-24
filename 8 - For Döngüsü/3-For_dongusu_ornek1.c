#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Turkish");

    int sayi, toplam = 0;
    
    printf("Lütfen bir sayý giriniz..\n");
    scanf("%d", &sayi);

    for(int i=0; i <= sayi; i++)
    {
        toplam = i + toplam;
    }

    printf("0'dan %d'ye kadar olan sayýlarýn toplamý: %d", sayi, toplam);

    return 0;
}