#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    char kelime[20]; //strlwr fonksiyonu girilen kelimenin tüm harflerinin küçük, strupr fonksiyonu ise tüm harflerin büyük yazýlmasýný saðlar.                    
    
    printf("Bir kelime giriniz\n");scanf("%s",kelime);

    printf("Girdiðiniz kelimenin küçük harflerle yazýlmýþ hali: %s\n", strlwr(kelime));
    printf("Girdiðiniz kelimenin büyük harflerle yazýlmýþ hali: %s\n", strupr(kelime));


    return 0;
}
