#include <stdio.h>
#include <stdlib.h>

int main()
{
//`````````````````````````````````````````````````````````````````````````````` Integer Diziler ```````````````````````````````````````````````````````````````````````````````````````
                                                                       

    int *sayiDizisi = calloc(4, sizeof(int));

    /*sayiDizisi[0] = 5;
    sayiDizisi[1] = 15;
    sayiDizisi[2] = 25;
    sayiDizisi[3] = 35;*/

    for(int i=0; i<4; i++)
    {
        printf("Dizinin %d. elemanini giriniz: ", i+1);
        scanf("%d", &sayiDizisi[i]);
    }

    int toplam=0;

    for(int i=0 ; i<4; i++)
    {
        toplam += sayiDizisi[i];
    }
    
    printf("ortalama: %d\n", toplam/4);


// ```````````````````````````````````````````````````````````````````````````````` Char Diziler ```````````````````````````````````````````````````````````````````````````````````````
    

    char *karakterDizisi = calloc(4, sizeof(char));

    for(int i=0; i<4; i++)
    {
        printf("Dizinin %d. karakterini giriniz: ",i+1);
        scanf(" %c", &karakterDizisi[i]);
    }

    printf("%s", karakterDizisi);
    printf("\n\n");

// ```````````````````````````````````````````````````````````````````````````` Cok Boyutlu Char Diziler ```````````````````````````````````````````````````````````````````````````````


    char** cokBoyutluKarakterDizisi;

    cokBoyutluKarakterDizisi = malloc(sizeof(char*)*3);

    for(int i=0; i<3; i++)
    {
        cokBoyutluKarakterDizisi[i] = malloc(10*sizeof(char));
    }

    cokBoyutluKarakterDizisi[0] = "Kaan";
    cokBoyutluKarakterDizisi[1] = "Academy";

    printf("Dizinin 3. elemanini giriniz\n");
    scanf("%s", cokBoyutluKarakterDizisi[2]);
    
    for(int i=0; i<3; i++)
    {
        printf("%s\n", cokBoyutluKarakterDizisi[i]);
    }





    return 0;
}