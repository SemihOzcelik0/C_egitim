#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    float sayilar[7];                  // sayilar[7] = {} þeklinde yazýlabilir, bu kullaným diziyi boþ küme olarak tanýmlayarak kümenin tüm elemanlarýna sýfýr deðerini atar hatalý
    for(int i=0; i<7; i++)            // kod þeklinde göstermesine raðmen çalýþýr.
    {
        printf("%d.elamaný giriniz: ", i+1);
        scanf("%f", &sayilar[i]); 
    }

    for(int j=0; j<7; j++)
    {
        printf("%d.eleman: %.1f\n", j+1, sayilar[j]);
    }
    

    return 0;
}