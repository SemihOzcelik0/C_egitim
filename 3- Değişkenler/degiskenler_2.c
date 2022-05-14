#include <stdio.h>
#include <stdlib.h>

#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int sayi;
    float kesirliSayi;
    double kesirliSayi2;
    char karakter;
    char karakterdizisi[5];                                // De�i�ken olarak atay�p kod i�erisinde dolduracaksak ayr�lmas� gereken byte'�n belirtilmesi gerekir.
    char karakterdizisi2[] = "Kaan Academy";              // E�er karakter dizisi tan�mlarken i�ine ram'de ay�rmas� gereken byte'� belirtmezsek otomatik olarak ay�r�r.

    printf("L�tfen bir integer de�eri giriniz\n");
    scanf("%d", &sayi);

    printf("L�tfen bir float de�eri giriniz\n");
    scanf("%f", &kesirliSayi);                                                                  // �NEML� //

    printf("L�tfen bir double de�eri giriniz\n");       // Double de�i�keni ram'de 8 byte yer kaplar "%f" ile tan�mlan�rsa float gibi de�erlendirilip 4 byte yer
    scanf("%lf", &kesirliSayi2);                       // ayr�l�r ve kod hata verir. Bu y�zden "%lf" yani long float �eklinde atama yap�lmas� gerekir. 
                                                      // printf i�in b�yle bir zorunluluk bulunmaz. %lf veya %f �eklinde yazd�r�labilir.
    printf("L�tfen bir karakter giriniz\n");            
    scanf(" %c", &karakter);                          // Char de�i�kenine yazd�r�l�rken " %c" �eklinde bir bo�luk b�rak�lmas� gerekmektedir, aksi halde �al��maz.

    printf("L�tfen 4 haneli karakter giriniz\n");     // Karakter dizisi i�in scanf komutu kullan�l�rken ampersand(&) i�aretinin kullan�lmas� �art de�ildir, olmasa da do�ru �al���r.
    scanf("%s", karakterdizisi);

    printf("Girdi�iniz integer : %d\n", sayi);
    printf("Girdi�iniz float : %f\n", kesirliSayi);
    printf("Girdi�iniz double : %lf\n", kesirliSayi2);
    printf("Girdi�iniz karakter : %c\n", karakter);
    printf("Girdi�iniz d�rt karakter : %s\n", karakterdizisi);

    return 0;
}