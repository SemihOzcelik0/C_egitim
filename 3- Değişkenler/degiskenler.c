#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"Turkish");

    int tamsayi = 6;                       // Ram'de 4 byte yer kaplayan tamsay� de�i�kenidir. "%d"
    double kesirli_sayi = 7.21231;        // Ram'de 8 byte yer kaplayan virg�lden sonra 10 basa�ama kadar tutabilen de�i�kendir. "%f"
    float kesirli_sayi2 = 5.6;           // Ram'de 4 byte yer kaplayan irg�lden sonra 6 basa�ama kadar tutabilen de�i�kendir "f"
    short int tamsayi2 = 2 ;            // Ram'de 2 byte yer kaplayan tamsay� de�i�kenidir. Art�k s�k kullan�lmaz.
    long int tamsayi3 = 957123;        // Ram'de 4 byte yer kaplayan tamsay� de�i�kenidir. Art�k s�k kullan�lmaz.
    char harf = 'K';                  // Ram'de 1 byte yer kaplayan 1 harf tutan de�i�kendir. Tek karakter '' i�aretleri aras�nda, diziler "" aras�nda yaz�l�r. "%c"
    char karakterDizisi[13] = "Kaan Academy";  /* Char de�i�kenine birden fazla harf tutabilmesi i�in k��eli parantezde tutaca�� harf adeti +1 �eklinde belirlenir (Bo�luklar dahil). "%s"
                                              Ramde byte ba��na bir harf yerle�ir ve dizinin sonland���n� belirtmek i�in fazladan ekledi�imiz 1 byte'a \0 yazar ve sonland�r�r.*/
    char karakterOrnegi[13] = {'K','a','a','n',' ','A','c','a','d','e','m','y'}; //14.Sat�rdaki karakter dizisinin farkl� bir yaz�m bi�imi.

    printf("int de�i�keni : %10d\n", tamsayi);           //"%10d" �eklinde say�dan �nce 10 sat�r bo�luk b�rak�p tan�mlanm�� say� yazd�r�labilir.
    printf("double de�i�keni : %.5f\n", kesirli_sayi);  //"%.2f" �eklinde virg�lden sonra ka� basama��n yazd�r�laca�� ayarlanabilir.
    printf("float de�i�keni : %.1f Ram'de %d byte yer kaplar\n", kesirli_sayi2, sizeof(float)); //sizeof komutu ile bellekte kaplad��� yer ��renilip printf i�erisinde %d ile yazd�r�labilir.
    printf("short int de�i�keni : %d\n", tamsayi2);
    printf("long int de�i�keni : %d\n", tamsayi3);
    printf("char de�i�keni : %c\n", harf);
    printf("char dizisi : %s\n", karakterDizisi);
    printf("char �rne�i : %s\n", karakterOrnegi);

    return 0;
}