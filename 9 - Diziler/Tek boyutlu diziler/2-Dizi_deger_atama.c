#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    float sayilar[7];                  // sayilar[7] = {} �eklinde yaz�labilir, bu kullan�m diziyi bo� k�me olarak tan�mlayarak k�menin t�m elemanlar�na s�f�r de�erini atar hatal�
    for(int i=0; i<7; i++)            // kod �eklinde g�stermesine ra�men �al���r.
    {
        printf("%d.elaman� giriniz: ", i+1);
        scanf("%f", &sayilar[i]); 
    }

    for(int j=0; j<7; j++)
    {
        printf("%d.eleman: %.1f\n", j+1, sayilar[j]);
    }
    

    return 0;
}