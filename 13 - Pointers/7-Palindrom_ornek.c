#include <stdio.h>
#include <string.h>
#include <locale.h>

/*int palindrom(char *array[])
{
    int boyut = strlen(array);
    char reverseArray[] = strrev(array);
    if(strcmp(*array, reverseArray) == 0)
    {return 1;}
    else{return 0;}
}*/

int main()
{
    setlocale(LC_ALL,"Turkish");

    char kelime[20];
    char *duzKelime, *tersKelime;
    
    printf("Palindrom olup olmad���n� ��renmek istedi�iniz kelimeyi giriniz\n");
    scanf("%s", kelime);

    duzKelime = kelime;
    for(tersKelime=kelime; *tersKelime != NULL; tersKelime++); /* ";" ile sonland�r�lan for d�ng�leri i�indeki �art� tamamlayana kadar yapar ve sonlan�r, b�yle bir kullan�m mevcuttur.
    D�ng�n�n �al��ma mant��� terskelime pointer� kelime dizisinin adresiyle e�itlenir ard�ndan pointer�n ald��� adreste bir eleman olup olmad���n� kontrol eder. Eleman varsa pointer�n
    tuttu�u adresi 1 art�r�r yani bir sonraki elemana ge�er. Bu �ekilde dizinin son eleman�n�n 1 fazlas� olan adrese kendini e�itler*/

    for(tersKelime--; tersKelime>=duzKelime;)
    {
        if(*duzKelime == *tersKelime)
        {
            duzKelime++;
            tersKelime--;
        }
        else{break;}
        
    }

    if(duzKelime > tersKelime)
    {
        puts(kelime);
        printf("Bir palindromdur\n");
    }
    else
    {
        puts(kelime);
        printf("Palindrom de�ildir\n");
    }



    




    return 0;
}