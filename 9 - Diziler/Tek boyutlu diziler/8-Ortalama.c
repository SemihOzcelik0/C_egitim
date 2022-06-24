#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int girilenSayiAdeti, i;
    float sayilar[100], ortalama, toplam=0;

    baslangic:
    printf("Kaç adet sayý gireceksiniz?\n");scanf("%d", &girilenSayiAdeti);

    if(girilenSayiAdeti>100 || girilenSayiAdeti<=0)
    {
        printf("Lütfen 0 ile 100 arasýnda bir deðer giriniz..\n");
        goto baslangic;
    }

    else
    {
        for(i=0; i<girilenSayiAdeti; i++)
        {
            printf("%d. sayýyý giriniz: ",i+1);scanf("%f", &sayilar[i]);
            toplam += sayilar[i];
        }
        
        ortalama = toplam/girilenSayiAdeti;
        printf("Girdiðiniz sayýlarýn toplamý: %.2f\n", toplam);
        printf("Girdiðiniz sayýlarýn ortalamasý: %.2f", ortalama);
 
    }


    return 0;
}