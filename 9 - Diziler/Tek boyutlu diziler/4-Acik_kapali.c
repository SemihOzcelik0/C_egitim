#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");       

    int i;

    int sayi2[] = {0,0,0,0};
    for(i=0; i<4; i++)
    {
        sayi2[i] = !sayi2[i];
        printf("%d ", sayi2[i]);
    }

    printf("\n");

    int sayi3[] = {1,1,1,1};        // Deðerleri 0, 1, 2, 3 olan 4 elemanlý sayi dizisinin her elemanýný tersine eþitleyip yazdýrmak elemanýn deðerini 1 veya 0 olarak deðiþtirir. 
    for(i=0; i<4; i++)             // C dilinde eðer bir elemanýn deðersi 0 ise 0 dýr, 0 dýþýnda bir deðere sahipse 1 dir. Bu yüzden 0 dýþýndaki deðerler 1, 0 ise sýfýrdýr.
    {                             // Döngü sonunda 0 sayýsý 1'e dönüþürken, 1, 2 ve 3 binary olarak 1 deðerine sahip olduðu için tersine yani 0'a dönüþür.
        sayi3[i] = !sayi3[i];
        printf("%d ", sayi3[i]);
    }

    printf("\n");

    int sayi[] = {0,1,2,3};
    for(i=0; i<4; i++)
    {
        sayi[i] = !sayi[i];         
        printf("%d ", sayi[i]);
    } 

    return 0;
}