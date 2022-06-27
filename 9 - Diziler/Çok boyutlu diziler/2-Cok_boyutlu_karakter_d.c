#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    char ogrenci[20] = {"Semih"};   // Tek boyutlu char dizisi bu �ekilde tan�mlan�r.
    printf("%s\n", ogrenci);

    char ogrenciler1[3][20] = {"Semih", "Emre", "Mert"};
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<20; j++)                     // 3 sat�rdan olu�an ve 20 karakter tutabilen karakter dizisinin her eleman�n� i� i�e
        {                                          // for d�ng�leriyle gezebiliriz.
            printf("%c", ogrenciler1[i][j]);      // 20 karakter tutabilen bir dizi oldu�u i�in karakter karakter gezdi�imizde 20 eleman�n�n yaz�lmayan b�l�mlerini de
            if(ogrenciler1[i][j] == '\0')        // gezdi�i i�in bo�luk b�rak�yor bunu if ile basit bir �ekilde engelleyebiliriz.
            {
                break;
            }                                     
        }          
        printf("***\n");                              
    }

    char ogrenciler2[3][20] = {"Semih", "Emre", "Mert"};
    for(int i=0; i<3; i++)                  // Bu karakter dizisinde 3 tane 20 karakter tutabilen ogrenciler isimli char dizisi olu�turduk.
    {                                      // For d�ng�s�nde do�rudan %s ile �a��rd���m�z i�in 20 karakteri tek tek gezmemize gerek kalmadan b�t�n halde
        printf("%s\n", ogrenciler2[i]);    // yazd�rmak m�mk�n oluyor.
    }

    return 0;
}