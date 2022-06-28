#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int buyukBul(int dizi[], int boyut)
{
    int secim = dizi[0];

    for(int i=1; i<boyut; i++)
    {
        if(secim<dizi[i])
        {
            secim = dizi[i];
        }
    }

    printf("Dizinin en büyük elemaný: %d\n", secim);
}

int main()
{
    setlocale(LC_ALL,"Turkish");

    int boyut, dizi[] = {15,22,35,66,75};
    boyut = sizeof(dizi) / sizeof(dizi[0]);
    buyukBul(dizi, boyut);
    

}