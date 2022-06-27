#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    char ogrenci[2][5][20]; // Okulda 2 sýnýf, her sýnýfta 5 öðrenci, her öðrencinin ismi için 20 karakter tutabilen karakter dizisi.
    for(int i=0; i<2; i++)
    {
        printf("\nÞube - %d\n", i+1);
        for(int j=0; j<5; j++)
        {
            printf("%d. öðrencinin adýný giriniz: ", j+1);
            scanf("%s", &ogrenci[i][j]);
        }
    }

    for(int i=0; i<2; i++)
    {
        printf("\nÞube - %d\n", i+1);
        for(int j=0; j<5; j++)
        {
            printf("%s\n", ogrenci[i][j]);
            
        }
        
    }
    printf("\n Özellik \n");  // ogrenci[1] þeklinde çaðýrmak ogrenci[1][0] þeklinde çaðýrmakla aynýdýr. 0. indisin 0. elemanýný çaðýrýr.
    printf("%s", ogrenci[1]); 


    return 0;
}