#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Turkish");

    char satis;
    int bilet, sayi;

    printf("Bilet Say�s�n� Giriniz..\n");
    scanf("%d", &bilet);

    for(; bilet>0 ;)
    {
        printf("Bilet almak istiyor musunuz ? [E / H]\n");
        scanf(" %c", &satis);

        if (satis == 'E' || satis == 'e')
        {
            printf("Ka� tane bilet almak istiyorsunuz ?\n");
            scanf("%d", &sayi);
            if(sayi <= bilet)
            {
                bilet -= sayi;
            }

            else if(sayi > bilet)
            {
                printf("Mevcut bilet say�s�: %d\nL�tfen mevcut bilet say�s�na g�re al�m yap�n�z.\n", bilet);
                continue;
            }
        }
        else if(satis == 'H' || satis == 'h')
        {
            printf("bb\n");
            continue;
        }

        else{
            printf("Yanl�� de�er girdiniz..\n");
        }
        
        printf("Kalan bilet say�s�: %d\n", bilet);
    }

    return 0;
}