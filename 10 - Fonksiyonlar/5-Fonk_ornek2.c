#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void listele(char isciIsimleri[][30], int boyut) // �ok boyutlu dizilerin fonksiyon i�erisinde al�rken yaln�zca tek boyutunu almak m�mk�nd�r, geri kalan� girilmek zorundad�r.
{
    for(int i=0; i<boyut; i++)
    {
        printf("%d.���inin ad�: %s\n", i+1, isciIsimleri[i]);
    }
}   

int main()
{
    setlocale(LC_ALL,"Turkish");

    char isciIsimleri[5][30] = {"Haydar", "Burcu", "Abdurrahman", "Ay�e", "Halil �brahim Yavuz"};
    listele(isciIsimleri, 5);

    return 0;
}