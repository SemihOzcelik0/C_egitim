#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    char mekan[20] = "Eyfel Kulesi";
    char ulke[20];
                                                                            // STRCPY //
    strcpy(ulke, mekan); // string copy'nin kýsaltmasý olan strcpy fonksiyonu dizileri kopyalamayý saðlar. Önce yapýþtýrýlacak ardýndan virgül ile ayýrarak kopyalanacak dizi girilir.


                                                                            // STRNCPY //
    strncpy(ulke, mekan, 6); // mekan isimli dizinin ilk 6 karakterinin (0'dan 5'e kadar olan indislerinin) ulke isimli diziye yazýlmasýný saðlar. Kaç karakter almak istiyorsanýz
                            // klasik dizi mantýðýyla \0 koyabilmesi için 1 fazla eleman içerecek þekilde dizinin elemaný belirlenmelidir. Ram'de strcpy ile atama yapýldýðý için 
                           // ilk 6 elemanda ayný olduðu için devamýnda gelen elemanlarda yazdýrýlýyor, bu yüzden strncpy çalýþmýyor gibi görünüyor aslýnda sorun yok.

    printf("Ülkede bulunanlar: %s\n", ulke);

    int i=0;
    while(ulke[i] != '\0')
    {
        printf("%c ", ulke[i]);
        i++;
    }
    printf("\n\n");

    // ```````````````````````````````````````````````````````````````````````` Posta Kodu Örneði ``````````````````````````````````````````````````````````````````````````````````````


    char ilceBilgileri[50] = "06460 Çankaya";
    char postaKodu[6];

    strncpy(postaKodu,ilceBilgileri,5);

    int j=0;
    while(postaKodu[j] != '\0')
    {
        printf("%c ", postaKodu[j]);
        j++;
    }
    return 0;
}