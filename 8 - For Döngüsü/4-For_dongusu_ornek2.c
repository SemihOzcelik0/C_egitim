#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Turkish");

    char satis;
    int bilet, sayi;

    printf("Bilet Sayýsýný Giriniz..\n");
    scanf("%d", &bilet);

    for(; bilet>0 ;)
    {
        printf("Bilet almak istiyor musunuz ? [E / H]\n");
        scanf(" %c", &satis);

        if (satis == 'E' || satis == 'e')
        {
            printf("Kaç tane bilet almak istiyorsunuz ?\n");
            scanf("%d", &sayi);
            if(sayi <= bilet)
            {
                bilet -= sayi;
            }

            else if(sayi > bilet)
            {
                printf("Mevcut bilet sayýsý: %d\nLütfen mevcut bilet sayýsýna göre alým yapýnýz.\n", bilet);
                continue;
            }
        }
        else if(satis == 'H' || satis == 'h')
        {
            printf("bb\n");
            continue;
        }

        else{
            printf("Yanlýþ deðer girdiniz..\n");
        }
        
        printf("Kalan bilet sayýsý: %d\n", bilet);
    }

    return 0;
}