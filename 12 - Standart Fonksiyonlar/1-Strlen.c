#include <stdio.h>
#include <locale.h>

#include <string.h> // Kullan�c�lar taraf�ndan haz�rlanm�� fonksiyonlar� kullanabilmek i�in dahil edilen k�t�phane

int main()
{
    setlocale(LC_ALL,"Turkish");    // strlen fonksiyonu karakter dizilerinin uzunlu�unu bulmaya yarayan fonksiyondur.

    // Karakter Dizileri: " Character Arrays --> KATAR --> STRING " �eklinde s�ylemlere sahiptir

    char isim[] = "Kaan Academy";                                           // D�KKAT //
    printf("%d\n", strlen(isim)); // strlen ile hesaplanan dizi boyutunda \0 say�lmamaktad�r do�rudan g�r�nen karakterlerin ve bo�luklar�n de�er toplam� yaz�lmaktad�r.

    char kelime[30];
    printf("L�tfen bir kelime giriniz.\n");
    // scanf("%s", kelime);
    //          ^
    //           `````````````````````````````````````````````````````   // GETS FONKS�YONU //
    gets(kelime); // scanf fonksiyonu %s ile karakter dizisine atama yaparken kelimeler aras�nda bo�luk g�r�rse oray� son kabul edip devam�n� almaz. Bu y�zden gets fonksiyonu ile 
               // b�t�n kelimeleri bo�luklar�yla birlikte diziye atamak m�mk�n�dr.
    
    int uzunluk = strlen(kelime);
    printf("\"%s\" kelimesinin uzunlu�u: %d\n", kelime, uzunluk);

    for(int i=0; i<uzunluk; i++)
    {
        printf("%c ", kelime[i]);        
    }

    printf("\n");

    for(int i=uzunluk-1; i>=0; i--)
    {
        printf("%c ", kelime[i]);
    }
    printf("\n\n");

    // ```````````````````````````````````````````````````````````````````````` PAROLA �RNE�� ``````````````````````````````````````````````````````````````````````````````````````
    char parola[30];
    fail:
    printf("L�tfen parolan�z� giriniz: ");gets(parola);

    if (strlen(parola) <10)
    {
        printf("Parolan�z minumum 10 karakterden olu�mal�d�r!\n");
        goto fail;
    }
    else if(strlen(parola)> 30)
    {
        printf("Maksimum 30 karakterli bir parola girebilirsiniz...\n");
        goto fail;
    }
    else
    {
        for(int i=0; i<strlen(parola); i++)
        {
            printf("*");
        }
        printf("\nParolan�z olu�turuldu...\n");
    }
    

    return 0;
}