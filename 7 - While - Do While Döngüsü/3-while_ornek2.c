#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int sayi1 = 0, i=0;
    int sayi2;
    int toplam = 0;

    printf("Lütfen 1'den kaça kadar olan sayýlarýn toplamýný öðrenmek istediðinizi girin.\n");
    scanf("%d", &sayi2);

    while (sayi1 < sayi2)
    {
        sayi1++;
        toplam = toplam + sayi1;
        printf("%d\n", sayi1);
    }
    
    
    printf("%d",toplam);
    return 0;



    while(i=0)
    {
        printf("sa");
    }
}