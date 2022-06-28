#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void tekcift(int sayi)                      // Dönmeyen Fonksiyon ile Teklik Çiftlik // 
{
    if(sayi == 0)
    {   
        printf("%d sayýsý ne tek, ne de bir çift sayýdýr..\n", sayi);
    }
    else if(sayi %2 == 0)
    {
        printf("%d sayýsý bir çift sayýdýr..\n", sayi);
    }
    else{
        printf("%d sayýsý bir tek sayýdýr..\n", sayi);
    }
}

int tekCiftKontrol(int sayi)
{
    if(sayi%2==0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    setlocale(LC_ALL,"Turkish");

    int sayi;

    tekcift(0);

    if(tekCiftKontrol(5)==1)
    {
        printf("Girilen sayý tek..\n");
    }
    else
    {
        printf("Girilen sayý çift..\n");
    }

    (tekCiftKontrol(10)) ? printf("Girilen sayý tek..\n") : printf("Girilen sayý çift..\n");

    printf("Bir sayý giriniz\n");scanf("%d", &sayi);
    for(int i=1; i<=sayi; i++)
    {
        tekcift(i);
    }

    return 0;
}