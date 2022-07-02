#include <stdio.h>
#include <locale.h>

void yildizBas(int *adet)
{   
    for(int i=0; i<*adet; i++)
    {printf("*  ");}
}


int main()
{
    setlocale(LC_ALL,"Turkish");

    int sayi1=5, sayi2=8;
    int *sayi1adres, *sayi2adres;

    sayi1adres = &sayi1;
    sayi2adres = &sayi2;

    printf("%d\n", *sayi1adres);
    printf("%d\n", *sayi2adres);

    // `````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````


    int x, y=0;
    int *a1, *a2 = &y;

    a1 = a2;

    x = ++(*a2);
    *a2 = *a1 + x;

    printf("%d %d %d %d", x, y, *a1, *a2);
    printf("\n\n");


    // `````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````

    int sayi;
    printf("Lütfen kaç adet yýldýz bastýrmak istediðinizi girin..\n");
    scanf("%d", &sayi);

    yildizBas(&sayi);


    return 0;

}