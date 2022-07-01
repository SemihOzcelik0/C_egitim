#include <stdio.h>

int faktoriyel(int sayi)
{
    if(sayi<=1){return 1;}
    else
    {
        return sayi* faktoriyel(sayi-1);
    }
}

int main()
{
    int sayi;
    printf("Faktoriyelini hesaplamak istediginiz sayiyi giriniz: ");
    scanf("%d", &sayi);

    printf("%d! = %d", sayi, faktoriyel(sayi));



    return 0;
}