#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void listele(char isciIsimleri[][30], int boyut) // Çok boyutlu dizilerin fonksiyon içerisinde alýrken yalnýzca tek boyutunu almak mümkündür, geri kalaný girilmek zorundadýr.
{
    for(int i=0; i<boyut; i++)
    {
        printf("%d.Ýþçinin adý: %s\n", i+1, isciIsimleri[i]);
    }
}   

int main()
{
    setlocale(LC_ALL,"Turkish");

    char isciIsimleri[5][30] = {"Haydar", "Burcu", "Abdurrahman", "Ayþe", "Halil Ýbrahim Yavuz"};
    listele(isciIsimleri, 5);

    return 0;
}