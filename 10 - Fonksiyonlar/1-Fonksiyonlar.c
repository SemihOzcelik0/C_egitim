#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void takimlar()                          // Fonksiyonlar main fonksiyonunun üzerinde tanýmlanýrlar.
{                       
    printf("Galatasaray\n");        
    printf("Fenerbahçe\n");             // Deðer döndüren ve döndürmeyen fonksiyonlar olarak iki tipte fonksiyon vardýr.
    printf("Beþiktaþ\n");              // Deðer döndürmeyen fonksiyonlar void ile yazýlýr, ana fonksiyonda çaðýrýldýklarýnda içindeki komutlarý çalýþtýrýr ve sonlanýr.  
}                                     // Ýçine herhangi bir deðer girmez ve çýkmaz.

int carpim(int sayi)                    // Deðer döndüren fonksiyon dönüþ tipiyle ayný olacak þekilde deðiþkenle yazýlýr. Deðer döndürmesi için sonuna return koyulur ve
{                                      // o deðeri tutar. Her türden deðiþkenle fonksiyon oluþturulabilir. Fonksiyonun adýndan sonraki paranteze içine girilecek deðerlerin
    return sayi*2;                    // veri tipi belirtilerek deðiþken oluþturulur. Bu fonksiyon içine girilen sayýyý ikiyle çarpan bir fonksiyondur, printf ile çaðrýlýrsa
}                                    // return tarafýndan tutulan deðeri yazdýrýr.       

float karekok(float sayi)
{
    return sqrt(sayi);
}

double karesinial(double sayi)
{
    return sayi*sayi;
}   

char basharf(char dizi[])
{
    return dizi[0];
}

void satirAtlama()
{
    printf("\n");
}

int sifirdanBuyukMu(int sayi)
{
    if(sayi>0)                  // Bu fonksiyon içine girilen sayý sýfýrdan büyükse sonucu 0'a, küçükse 1'e eþitleyen bir fonksiyondur.
    {
        return 0;
    }
    else if(sayi<0)
    {
        return 1;
    }
}

int main()
{
    setlocale(LC_ALL,"Turkish");
    int sayi;

    takimlar();
    printf("%d\n", carpim(5));

    printf("%f\n", karekok(16));

    printf("%f\n", karesinial(8));

    satirAtlama();

    printf("%c\n", basharf("semih"));

    printf("Sýfýra göre durumunu sorgulamak istediðiniz sayýyý giriniz..\n");scanf("%d", &sayi);
    if(sifirdanBuyukMu(sayi) == 0)
    {
        printf("Girdiðiniz sayý sýfýrdan büyük\n");
    }
    else if(sifirdanBuyukMu(sayi) == 1)
    {
        printf("GÝrdiðiniz sayý sýfýrdan küçük\n");
    }


    return 0;
}