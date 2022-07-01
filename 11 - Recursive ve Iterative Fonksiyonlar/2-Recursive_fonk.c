#include <stdio.h>
#include <locale.h>

int gaus(int sayi)
{
    int toplam =0;
    if(sayi !=0){
        return toplam = sayi + gaus(sayi-1);
    }
    else if(sayi<0){return 0;}
    else{return 0;}
}

int main()
{
    setlocale(LC_ALL,"Turkish");
    int sayi;
    
    printf("Pozitif bir sayý giriniz : ");scanf("%d", &sayi);
    printf("%d", gaus(sayi));

    return 0;
}