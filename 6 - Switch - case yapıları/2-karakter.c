#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    char karakter;

    printf("Lütfen \" A, B, C\" karakterlerinden birini giriniz.\n");
    scanf("%c", &karakter);                 // Switch kullanýmýnda türkçe karakterler hata verir bu yüzden kullanýlmaz.

    switch(karakter)
    {
        case 'A': printf("Ali geldi."); break;
        case 'B': printf("Buse geldi."); break;
        case 'C': printf("Cengiz geldi."); break;
        default : printf("Lütfen \"A, B, C\" karakterlerinden birini giriniz"); break;

    }

    return 0;
}