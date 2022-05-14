#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");
    int siparisKodu;
    float hesap, porsiyon;

    /*
            MEN�          S�PAR�� KODU         F�YATI
        Ba�lang��lar           1               5.5 TL
        Ara S�caklar           2               7.5 TL
        Salatalar              3               12 TL
        Ana Yemekler           4               17.75 TL
        Tatl�lar               5               11.25 TL
        ��ecekler              6               2.25 TL
    */
    hesap = 0;

    
    printf("    MEN�          S�PAR�� KODU         F�YATI\n");
    printf("Ba�lang��lar           1               5.5 TL\n");
    printf("Ara S�caklar           2               7.5 TL\n");
    printf("Salatalar              3               12 TL\n");
    printf("Ana Yemekler           4               17.75 TL\n");
    printf("Tatl�lar               5               11.25 TL\n");
    printf("��ecekler              6               2.25 TL\n");
    printf("Sipari�i Sonland�rmak ��in \"0\" giriniz..\n");
    
    siparis:
    printf("---> ");
    scanf("%d", &siparisKodu);

    if (siparisKodu > 0 && siparisKodu < 7)
    {
        error:
        printf("L�tfen ka� porsiyon almak istedi�inizi giriniz (Orn: 1,5)\n");
        scanf("%f", &porsiyon);

        if (porsiyon > 0)
        {
            switch (siparisKodu)
            {
                case 1:
                    hesap += porsiyon * 5.5;
                    printf("G�ncel hesap: %.2f TL\n", hesap);
                    break;

                case 2:
                    hesap += porsiyon * 7.5;
                    printf("G�ncel hesap: %.2f TL\n", hesap);
                    break;

                case 3:
                    hesap += porsiyon * 12;
                    printf("G�ncel hesap: %.2f TL\n", hesap);
                    break;

                case 4:
                    hesap += porsiyon * 17.75;
                    printf("G�ncel hesap: %.2f TL\n", hesap);
                    break;

                case 5:
                    hesap += porsiyon * 11.25;
                    printf("G�ncel hesap: %.2f TL\n", hesap);
                    break;
                    
                case 6:
                    hesap += porsiyon * 2.25;
                    printf("G�ncel hesap: %.2f TL\n", hesap);
                    break;

                default:
                    printf("L�tfen 1 - 6 aras�nda bir rakam giriniz..\n");
                    break;
            }
        }
        
        
        else
        {
            printf("Porsiyonunuz 0'dan b�y�k olmal�d�r..\n");
            goto error;
        }
        
    }
    else if (siparisKodu == 0)
    {
        printf("Toplam sipari� tutar�: %.2f TL\n", hesap - (hesap*0.1));
        printf("KDV                  : %.2f TL\n", hesap*0.1);
        printf("Genel Toplam         : %.2f TL\n", hesap);
        goto cikis;
    }
    
    goto siparis;
    cikis:
        return 0;
    }