#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int sayi, i, j;
    char secim;

    dewam:
    printf("�arp�m tablosunu g�r�nt�lemek i�in ---> C\n");
    printf("Tek bir say�n�n tablosunu g�r�nt�lemek i�in ---> T\n");
    printf("Program� sonland�rmak i�in ---> S\n--> ");
    scanf(" %c", &secim);

    if (secim == 'C' || secim == 'c' )
    {
        for(i=1; i <= 10; i++)
        {
            for(j=1; j<10; j++)
            {
                printf("%d x %d = %d\t", i, j, i*j);
            }
            printf("\n");
        }

        printf("\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n\n");

    }
    else if (secim == 'T' || secim == 't')
    {

        printf("�arp�m tablosunu g�r�nt�lemek istedi�iniz rakam� giriniz.\n--> ");
        scanf("%d", &sayi);

        for(int i=1; i<=10; i++)
        {
            printf("%d x %d = %d\n", sayi, i, sayi*i);
        }

        printf("\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n\n");

    }

    else if(secim == 'S' || secim == 's')
    {
        exit(0);
    }

    else{
        printf("\nHatal� giri� yapt�n�z. L�tfen [ C, T, S ] de�erlerinden birini giriniz.\n\n");
        goto dewam;
    }
    
    goto dewam;
    return 0;
}