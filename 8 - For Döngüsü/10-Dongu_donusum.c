#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int sayi, likesayi, i=1;
    float oran;
    
    printf("Ka� tane sanat�� oldu�unu giriniz : ");scanf("%d", &sayi);
    /*for(int i=1; i<= sayi; i++)
    {
        printf("%d. sanat��n�n be�eni y�zdesini giriniz : ", i);scanf("%d", &likesayi);
        oran = likesayi*0.01;
        printf("%d. sanat��n�n be�enilme oran� = %%%d\n", i, oran);

    }*/


    /*while(i<=sayi)
    {
        printf("%d. sanat��n�n be�eni y�zdesini giriniz : ", i);scanf("%d", &likesayi);
        oran = likesayi*0.01;
        printf("%d. sanat��n�n be�enilme oran� = %%%d\n", i, oran);
        i++;

    }*/


    do
    {
        printf("%d. sanat��n�n be�eni y�zdesini giriniz : ", i);scanf("%d", &likesayi);
        oran = likesayi*0.01;
        printf("%d. sanat��n�n be�enilme oran� = %%%d\n", i, oran);
        i++; 
    } while (i<=sayi);
    


    return 0;
}