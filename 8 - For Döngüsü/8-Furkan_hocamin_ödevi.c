#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int sayi, i, j;
    char secim;

    dewam:
    printf("Çarpým tablosunu görüntülemek için ---> C\n");
    printf("Tek bir sayýnýn tablosunu görüntülemek için ---> T\n");
    printf("Programý sonlandýrmak için ---> S\n--> ");
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

        printf("Çarpým tablosunu görüntülemek istediðiniz rakamý giriniz.\n--> ");
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
        printf("\nHatalý giriþ yaptýnýz. Lütfen [ C, T, S ] deðerlerinden birini giriniz.\n\n");
        goto dewam;
    }
    
    goto dewam;
    return 0;
}