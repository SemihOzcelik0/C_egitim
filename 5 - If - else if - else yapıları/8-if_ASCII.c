#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    char karakter1, karakter2;                  //ASCII de�erleri integer tipinde tutulur ve char de�i�kenini integer olarak yazd�rmas�n� istersek bize ASCII de�erini verir

    printf("ASCII de�erini ��renmek istedi�iniz karakteri giriniz\n");
    scanf("%c", &karakter1);

    printf("%c karakterinin ASCII de�eri: %d\n",karakter1, karakter1);

    /* ASCII de�erlerinde b�y�k harfler 65'den ba�lay�p 90'a kadar gitmektedir. K���k harfler ise 97 - 122 aral���ndad�r. */
    
    int ASCII = karakter1;

    if ( ASCII >= 65 && ASCII <= 90)
    {
        printf("%c harfi b�y�k harftir.", karakter1);
    }
    else if( ASCII >=97 && ASCII <= 122)
    {
        printf("%c harfi k���k harftir.", karakter1);
    }
    else{
        printf("L�tfen bir \"harf\" giriniz !!");
    }
    

    return 0;
}