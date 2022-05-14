#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");
    int siparisKodu;
    float hesap, porsiyon;

    /*
            MENÜ          SÝPARÝÞ KODU         FÝYATI
        Baþlangýçlar           1               5.5 TL
        Ara Sýcaklar           2               7.5 TL
        Salatalar              3               12 TL
        Ana Yemekler           4               17.75 TL
        Tatlýlar               5               11.25 TL
        Ýçecekler              6               2.25 TL
    */
    hesap = 0;

    
    printf("    MENÜ          SÝPARÝÞ KODU         FÝYATI\n");
    printf("Baþlangýçlar           1               5.5 TL\n");
    printf("Ara Sýcaklar           2               7.5 TL\n");
    printf("Salatalar              3               12 TL\n");
    printf("Ana Yemekler           4               17.75 TL\n");
    printf("Tatlýlar               5               11.25 TL\n");
    printf("Ýçecekler              6               2.25 TL\n");
    printf("Sipariþi Sonlandýrmak Ýçin \"0\" giriniz..\n");
    
    siparis:
    printf("---> ");
    scanf("%d", &siparisKodu);

    if (siparisKodu > 0 && siparisKodu < 7)
    {
        error:
        printf("Lütfen kaç porsiyon almak istediðinizi giriniz (Orn: 1,5)\n");
        scanf("%f", &porsiyon);

        if (porsiyon > 0)
        {
            switch (siparisKodu)
            {
                case 1:
                    hesap += porsiyon * 5.5;
                    printf("Güncel hesap: %.2f TL\n", hesap);
                    break;

                case 2:
                    hesap += porsiyon * 7.5;
                    printf("Güncel hesap: %.2f TL\n", hesap);
                    break;

                case 3:
                    hesap += porsiyon * 12;
                    printf("Güncel hesap: %.2f TL\n", hesap);
                    break;

                case 4:
                    hesap += porsiyon * 17.75;
                    printf("Güncel hesap: %.2f TL\n", hesap);
                    break;

                case 5:
                    hesap += porsiyon * 11.25;
                    printf("Güncel hesap: %.2f TL\n", hesap);
                    break;
                    
                case 6:
                    hesap += porsiyon * 2.25;
                    printf("Güncel hesap: %.2f TL\n", hesap);
                    break;

                default:
                    printf("Lütfen 1 - 6 arasýnda bir rakam giriniz..\n");
                    break;
            }
        }
        
        
        else
        {
            printf("Porsiyonunuz 0'dan büyük olmalýdýr..\n");
            goto error;
        }
        
    }
    else if (siparisKodu == 0)
    {
        printf("Toplam sipariþ tutarý: %.2f TL\n", hesap - (hesap*0.1));
        printf("KDV                  : %.2f TL\n", hesap*0.1);
        printf("Genel Toplam         : %.2f TL\n", hesap);
        goto cikis;
    }
    
    goto siparis;
    cikis:
        return 0;
    }