#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int sayi1, sayi2, buyuk, kucuk, kalan;
    
    do
    {
        printf("EBOB'larýný öðrenmek istediðiniz iki sayýyý giriniz..\n");
        scanf("%d%d", &sayi1,&sayi2);
    } while (sayi1 <= 0 || sayi2 <= 0);
    
    if (sayi1 < sayi2)
    {
        buyuk = sayi1;
        kucuk = sayi2;
    }
    else
    {
        buyuk = sayi2;
        kucuk = sayi1;
    }
    
    kalan = buyuk % kucuk;

    while (kalan != 0)
    {
        
    }
    
    printf("Ýki sayýnýn En büyük ortak böleni = %d", kucuk);

    return 0;
}