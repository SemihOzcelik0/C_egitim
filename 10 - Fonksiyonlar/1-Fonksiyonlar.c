#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void takimlar()                          // Fonksiyonlar main fonksiyonunun �zerinde tan�mlan�rlar.
{                       
    printf("Galatasaray\n");        
    printf("Fenerbah�e\n");             // De�er d�nd�ren ve d�nd�rmeyen fonksiyonlar olarak iki tipte fonksiyon vard�r.
    printf("Be�ikta�\n");              // De�er d�nd�rmeyen fonksiyonlar void ile yaz�l�r, ana fonksiyonda �a��r�ld�klar�nda i�indeki komutlar� �al��t�r�r ve sonlan�r.  
}                                     // ��ine herhangi bir de�er girmez ve ��kmaz.

int carpim(int sayi)                    // De�er d�nd�ren fonksiyon d�n�� tipiyle ayn� olacak �ekilde de�i�kenle yaz�l�r. De�er d�nd�rmesi i�in sonuna return koyulur ve
{                                      // o de�eri tutar. Her t�rden de�i�kenle fonksiyon olu�turulabilir. Fonksiyonun ad�ndan sonraki paranteze i�ine girilecek de�erlerin
    return sayi*2;                    // veri tipi belirtilerek de�i�ken olu�turulur. Bu fonksiyon i�ine girilen say�y� ikiyle �arpan bir fonksiyondur, printf ile �a�r�l�rsa
}                                    // return taraf�ndan tutulan de�eri yazd�r�r.       

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
    if(sayi>0)                  // Bu fonksiyon i�ine girilen say� s�f�rdan b�y�kse sonucu 0'a, k���kse 1'e e�itleyen bir fonksiyondur.
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

    printf("S�f�ra g�re durumunu sorgulamak istedi�iniz say�y� giriniz..\n");scanf("%d", &sayi);
    if(sifirdanBuyukMu(sayi) == 0)
    {
        printf("Girdi�iniz say� s�f�rdan b�y�k\n");
    }
    else if(sifirdanBuyukMu(sayi) == 1)
    {
        printf("G�rdi�iniz say� s�f�rdan k���k\n");
    }


    return 0;
}