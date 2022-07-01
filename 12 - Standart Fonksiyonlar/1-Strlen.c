#include <stdio.h>
#include <locale.h>

#include <string.h> // Kullanýcýlar tarafýndan hazýrlanmýþ fonksiyonlarý kullanabilmek için dahil edilen kütüphane

int main()
{
    setlocale(LC_ALL,"Turkish");    // strlen fonksiyonu karakter dizilerinin uzunluðunu bulmaya yarayan fonksiyondur.

    // Karakter Dizileri: " Character Arrays --> KATAR --> STRING " þeklinde söylemlere sahiptir

    char isim[] = "Kaan Academy";                                           // DÝKKAT //
    printf("%d\n", strlen(isim)); // strlen ile hesaplanan dizi boyutunda \0 sayýlmamaktadýr doðrudan görünen karakterlerin ve boþluklarýn deðer toplamý yazýlmaktadýr.

    char kelime[30];
    printf("Lütfen bir kelime giriniz.\n");
    // scanf("%s", kelime);
    //          ^
    //           `````````````````````````````````````````````````````   // GETS FONKSÝYONU //
    gets(kelime); // scanf fonksiyonu %s ile karakter dizisine atama yaparken kelimeler arasýnda boþluk görürse orayý son kabul edip devamýný almaz. Bu yüzden gets fonksiyonu ile 
               // bütün kelimeleri boþluklarýyla birlikte diziye atamak mümkünüdr.
    
    int uzunluk = strlen(kelime);
    printf("\"%s\" kelimesinin uzunluðu: %d\n", kelime, uzunluk);

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

    // ```````````````````````````````````````````````````````````````````````` PAROLA ÖRNEÐÝ ``````````````````````````````````````````````````````````````````````````````````````
    char parola[30];
    fail:
    printf("Lütfen parolanýzý giriniz: ");gets(parola);

    if (strlen(parola) <10)
    {
        printf("Parolanýz minumum 10 karakterden oluþmalýdýr!\n");
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
        printf("\nParolanýz oluþturuldu...\n");
    }
    

    return 0;
}