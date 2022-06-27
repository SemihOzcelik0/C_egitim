#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    char ogrenci[20] = {"Semih"};   // Tek boyutlu char dizisi bu þekilde tanýmlanýr.
    printf("%s\n", ogrenci);

    char ogrenciler1[3][20] = {"Semih", "Emre", "Mert"};
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<20; j++)                     // 3 satýrdan oluþan ve 20 karakter tutabilen karakter dizisinin her elemanýný iç içe
        {                                          // for döngüleriyle gezebiliriz.
            printf("%c", ogrenciler1[i][j]);      // 20 karakter tutabilen bir dizi olduðu için karakter karakter gezdiðimizde 20 elemanýnýn yazýlmayan bölümlerini de
            if(ogrenciler1[i][j] == '\0')        // gezdiði için boþluk býrakýyor bunu if ile basit bir þekilde engelleyebiliriz.
            {
                break;
            }                                     
        }          
        printf("***\n");                              
    }

    char ogrenciler2[3][20] = {"Semih", "Emre", "Mert"};
    for(int i=0; i<3; i++)                  // Bu karakter dizisinde 3 tane 20 karakter tutabilen ogrenciler isimli char dizisi oluþturduk.
    {                                      // For döngüsünde doðrudan %s ile çaðýrdýðýmýz için 20 karakteri tek tek gezmemize gerek kalmadan bütün halde
        printf("%s\n", ogrenciler2[i]);    // yazdýrmak mümkün oluyor.
    }

    return 0;
}