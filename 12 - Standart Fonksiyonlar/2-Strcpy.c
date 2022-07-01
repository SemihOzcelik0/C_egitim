#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    char mekan[20] = "Eyfel Kulesi";
    char ulke[20];
                                                                            // STRCPY //
    strcpy(ulke, mekan); // string copy'nin k�saltmas� olan strcpy fonksiyonu dizileri kopyalamay� sa�lar. �nce yap��t�r�lacak ard�ndan virg�l ile ay�rarak kopyalanacak dizi girilir.


                                                                            // STRNCPY //
    strncpy(ulke, mekan, 6); // mekan isimli dizinin ilk 6 karakterinin (0'dan 5'e kadar olan indislerinin) ulke isimli diziye yaz�lmas�n� sa�lar. Ka� karakter almak istiyorsan�z
                            // klasik dizi mant���yla \0 koyabilmesi i�in 1 fazla eleman i�erecek �ekilde dizinin eleman� belirlenmelidir. Ram'de strcpy ile atama yap�ld��� i�in 
                           // ilk 6 elemanda ayn� oldu�u i�in devam�nda gelen elemanlarda yazd�r�l�yor, bu y�zden strncpy �al��m�yor gibi g�r�n�yor asl�nda sorun yok.

    printf("�lkede bulunanlar: %s\n", ulke);

    int i=0;
    while(ulke[i] != '\0')
    {
        printf("%c ", ulke[i]);
        i++;
    }
    printf("\n\n");

    // ```````````````````````````````````````````````````````````````````````` Posta Kodu �rne�i ``````````````````````````````````````````````````````````````````````````````````````


    char ilceBilgileri[50] = "06460 �ankaya";
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