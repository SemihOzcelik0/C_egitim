#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    char ogrenci[2][5][20]; // Okulda 2 s�n�f, her s�n�fta 5 ��renci, her ��rencinin ismi i�in 20 karakter tutabilen karakter dizisi.
    for(int i=0; i<2; i++)
    {
        printf("\n�ube - %d\n", i+1);
        for(int j=0; j<5; j++)
        {
            printf("%d. ��rencinin ad�n� giriniz: ", j+1);
            scanf("%s", &ogrenci[i][j]);
        }
    }

    for(int i=0; i<2; i++)
    {
        printf("\n�ube - %d\n", i+1);
        for(int j=0; j<5; j++)
        {
            printf("%s\n", ogrenci[i][j]);
            
        }
        
    }
    printf("\n �zellik \n");  // ogrenci[1] �eklinde �a��rmak ogrenci[1][0] �eklinde �a��rmakla ayn�d�r. 0. indisin 0. eleman�n� �a��r�r.
    printf("%s", ogrenci[1]); 


    return 0;
}