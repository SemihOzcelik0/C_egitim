#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void tekcift(int sayi)                      // D�nmeyen Fonksiyon ile Teklik �iftlik // 
{
    if(sayi == 0)
    {   
        printf("%d say�s� ne tek, ne de bir �ift say�d�r..\n", sayi);
    }
    else if(sayi %2 == 0)
    {
        printf("%d say�s� bir �ift say�d�r..\n", sayi);
    }
    else{
        printf("%d say�s� bir tek say�d�r..\n", sayi);
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
        printf("Girilen say� tek..\n");
    }
    else
    {
        printf("Girilen say� �ift..\n");
    }

    (tekCiftKontrol(10)) ? printf("Girilen say� tek..\n") : printf("Girilen say� �ift..\n");

    printf("Bir say� giriniz\n");scanf("%d", &sayi);
    for(int i=1; i<=sayi; i++)
    {
        tekcift(i);
    }

    return 0;
}