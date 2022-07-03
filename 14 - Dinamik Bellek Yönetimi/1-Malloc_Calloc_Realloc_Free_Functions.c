#include <stdio.h>
#include <stdlib.h>


int main()
{
    int *alan1 = malloc(10*sizeof(int)); // alan1 isimli pointerda 10 tane integer boyutunda alan ayrýldý. Ýlk girilen deðer kaç tane, ikinci kaç byte'lýk alan ayrýlacaðýný gösterir.
    int *alan2 = calloc(10,sizeof(int)); // alan2 isimli pointerda 10 tane integer boyutunda alan önce sýfýra eþitlenip sonra ayrýldý.....^

    for(int i=0; i<10; i++)
    {
        printf("alan1[%d] = %d     alan2[%d] = %d\n", i, alan1[i], i, alan2[i]);
    }
    
    alan1[0] = 100; // Ýstenildiði zaman istenen elemanýn deðeri deðiþtirilebilir.

    printf("\n\n");

    // malloc ve calloc fonksiyonlarýnýn ayýrdýðý alaný çoðaltmak yada azaltmak için aþaðýdaki fonksiyonlar kullanýlýr. 

    alan1 = realloc(alan1, 5*sizeof(int));
    for(int i=0; i<5; i++)
    {
        printf("alan1[%d] = %d\n", i, alan1[i]);   // malloc için realloc kullanýldýðýnda öncekinde tutulan deðerler deðiþmez sadece artýk daha az veya çok alan tutar.
    }

    // malloc ve calloc fonksiyonlarýyla ramde ayrýlan bölümleri temizlemek için free fonksiyonu kullanýlýr. 

    free(alan1);
    free(alan2);

    return 0;
}