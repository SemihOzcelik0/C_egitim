#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    char karakter;

    printf("L�tfen \" A, B, C\" karakterlerinden birini giriniz.\n");
    scanf("%c", &karakter);                 // Switch kullan�m�nda t�rk�e karakterler hata verir bu y�zden kullan�lmaz.

    switch(karakter)
    {
        case 'A': printf("Ali geldi."); break;
        case 'B': printf("Buse geldi."); break;
        case 'C': printf("Cengiz geldi."); break;
        default : printf("L�tfen \"A, B, C\" karakterlerinden birini giriniz"); break;

    }

    return 0;
}