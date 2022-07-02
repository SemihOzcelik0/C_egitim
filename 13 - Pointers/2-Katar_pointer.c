#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    /*char *takimlar[] = {"Ordu", "mugla", "fatsa", "asya", "ankara", "adana", "istanbul"};
    for(int i=0; takimlar[i] !='\0'; i++)
    {
        printf("%s\n", *(takimlar+i));
    }*/

    // `````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````

    char ulkeler[5][20];
    for(int i=0; i<5; i++)
    {
        printf("%d. ülkeyi giriniz: ",i+1);
        //scanf("%s", ulkeler[i]);
        gets(ulkeler[i]);
    }

    for(int i=0; i<5; i++)
    {
        printf("%s\n", ulkeler[i]);
    }

    char *ulkelerinAdresi[5];

    for(int i=0; i<5; i++)
    {
        ulkelerinAdresi[i] = &ulkeler[i];
    }

    for(int i=0; i<5; i++)
    {
        printf("%s\n", *(ulkelerinAdresi+i));
        // printf("%s\n", *(ulkelerinAdresi[i])); Þeklinde de yazdýrýlabilir.
    }

    return 0;
}
