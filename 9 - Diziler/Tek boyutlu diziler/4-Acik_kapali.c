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

    int sayi3[] = {1,1,1,1};        // De�erleri 0, 1, 2, 3 olan 4 elemanl� sayi dizisinin her eleman�n� tersine e�itleyip yazd�rmak eleman�n de�erini 1 veya 0 olarak de�i�tirir. 
    for(i=0; i<4; i++)             // C dilinde e�er bir eleman�n de�ersi 0 ise 0 d�r, 0 d���nda bir de�ere sahipse 1 dir. Bu y�zden 0 d���ndaki de�erler 1, 0 ise s�f�rd�r.
    {                             // D�ng� sonunda 0 say�s� 1'e d�n���rken, 1, 2 ve 3 binary olarak 1 de�erine sahip oldu�u i�in tersine yani 0'a d�n���r.
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