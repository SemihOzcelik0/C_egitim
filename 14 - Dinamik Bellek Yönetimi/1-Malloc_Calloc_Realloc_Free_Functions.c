#include <stdio.h>
#include <stdlib.h>


int main()
{
    int *alan1 = malloc(10*sizeof(int)); // alan1 isimli pointerda 10 tane integer boyutunda alan ayr�ld�. �lk girilen de�er ka� tane, ikinci ka� byte'l�k alan ayr�laca��n� g�sterir.
    int *alan2 = calloc(10,sizeof(int)); // alan2 isimli pointerda 10 tane integer boyutunda alan �nce s�f�ra e�itlenip sonra ayr�ld�.....^

    for(int i=0; i<10; i++)
    {
        printf("alan1[%d] = %d     alan2[%d] = %d\n", i, alan1[i], i, alan2[i]);
    }
    
    alan1[0] = 100; // �stenildi�i zaman istenen eleman�n de�eri de�i�tirilebilir.

    printf("\n\n");

    // malloc ve calloc fonksiyonlar�n�n ay�rd��� alan� �o�altmak yada azaltmak i�in a�a��daki fonksiyonlar kullan�l�r. 

    alan1 = realloc(alan1, 5*sizeof(int));
    for(int i=0; i<5; i++)
    {
        printf("alan1[%d] = %d\n", i, alan1[i]);   // malloc i�in realloc kullan�ld���nda �ncekinde tutulan de�erler de�i�mez sadece art�k daha az veya �ok alan tutar.
    }

    // malloc ve calloc fonksiyonlar�yla ramde ayr�lan b�l�mleri temizlemek i�in free fonksiyonu kullan�l�r. 

    free(alan1);
    free(alan2);

    return 0;
}