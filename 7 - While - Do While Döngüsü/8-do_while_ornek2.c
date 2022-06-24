#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    
    int sayi, basamakSayisi = 0, toplam = 0, ilkSayi = 0;
    char soru;
    
    tekrar:

    printf("------------------------------------------------------------\n");
    printf("Rakamlarýný toplamak istediðiniz sayýyý giriniz..\n");scanf("%d", &sayi);

    ilkSayi = sayi;
    if (sayi >= 0)
    {
        
        do{
            toplam += sayi % 10; // 13
            basamakSayisi++;
            sayi = sayi / 10;

        }while(sayi>0);

        printf("Girdiðiniz %d basamaklý %d sayýsýnýn rakamlarý toplamý: %d\n", basamakSayisi, ilkSayi, toplam);

        printf("------------------------------------------------------------\n");
        printf("Hesaplamaya devam etmek istiyor musunuz ? [ E / H ]\n");
        scanf(" %c", &soru);
        if (soru == 'E' || soru == 'e')
        {
            sayi = 0;
            basamakSayisi = 0;
            toplam = 0;
            ilkSayi = 0;
            goto tekrar;
        }
        else
        {
            printf("Program Sonlandý..");
            exit(0);
        }
        
    }

    else
    {
        printf("Negatif sayýlarýn rakamlarý toplamý hesaplanmaz..");
    }

    


    return 0;
}