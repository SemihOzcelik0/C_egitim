#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    // INT T�P�NDE D�Z�LER // 

    int sayilar[] = {5, 10};            // Diziler tek bir de�i�kene farkl� de�erler atay�p indis olarak �a��rmam�z� sa�lar.

    printf("%d\n", sayilar[0]);
    printf("%d\n", sayilar[1]);


    int sayidizisi[] = {3,6,9,12,15};   // 5 elemanl� say� dizisi her integer de�er i�in 4 byte yani 20 byte kaplayan bir dizi.

    for(int i=0; i<5; i++)
    {
        printf("%d\n", sayidizisi[i]);
    } 

    printf("\n");

    // FLOAT T�P�NDE D�Z�LER // 

    float sayilar2[] = {3.2, 7.5, 9.6};

    for(int j=0; j<3; j++)
    {
        printf("%.1f\n", sayilar2[j]);
    }

    return 0;
}