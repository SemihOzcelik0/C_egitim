#include <stdio.h>
#include <locale.h>

// ITERATIVE (Yinelemeli) //
int faktoriyel(int sayi)
{
    int sonuc =1;
    for(int i=0; i<sayi; i++)
    {
        sonuc *=(i+1);
    }
    return sonuc;
}

// RECURSIVE (Öz Yinelemeli)//
int faktoriyelRecursive(int sayi)
{
    if (sayi<=1){return 1;} // 0 yada 1 sayýsýnýn faktöriyeli 1 dir.
    else{
        return sayi*faktoriyelRecursive(sayi-1); // Açýklayamadým unutursan 68.video :D
    }
}

int main()
{
    setlocale(LC_ALL,"Turkish");

    printf("%d\n", faktoriyel(5));
    printf("%d", faktoriyelRecursive(5));


    return 0;
}