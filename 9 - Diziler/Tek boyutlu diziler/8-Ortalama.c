#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int girilenSayiAdeti, i;
    float sayilar[100], ortalama, toplam=0;

    baslangic:
    printf("Ka� adet say� gireceksiniz?\n");scanf("%d", &girilenSayiAdeti);

    if(girilenSayiAdeti>100 || girilenSayiAdeti<=0)
    {
        printf("L�tfen 0 ile 100 aras�nda bir de�er giriniz..\n");
        goto baslangic;
    }

    else
    {
        for(i=0; i<girilenSayiAdeti; i++)
        {
            printf("%d. say�y� giriniz: ",i+1);scanf("%f", &sayilar[i]);
            toplam += sayilar[i];
        }
        
        ortalama = toplam/girilenSayiAdeti;
        printf("Girdi�iniz say�lar�n toplam�: %.2f\n", toplam);
        printf("Girdi�iniz say�lar�n ortalamas�: %.2f", ortalama);
 
    }


    return 0;
}