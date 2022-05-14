#include <stdio.h>
#include <stdlib.h>
#include <locale.h>     /* Turkce karakterleri kullanmamizi saplayan kutuphaneyi dahil eder Windows 1254*/


int main() // Program ilk basladaginda main fonksiyonu calisir.
{
    setlocale(LC_ALL, "Turkish");    // Turkce karakter destegini saglar
    printf("Merhaba dunya\n");

    return 0;

}