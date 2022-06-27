#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int satir, sutun, i, j;
    
    printf("Olu�turaca��n�z iki matris ka� sat�r ve s�tundan olu�sun ?\n");
    printf("Sat�r: ");scanf("%d", &satir);
    printf("S�tun: ");scanf("%d", &sutun);

    int matris1[satir][sutun];
    int matris2[satir][sutun];
    int toplam[satir][sutun];

    printf("1. MATR�S \n");

    for(i=0; i<satir; i++)
    {
        for(j=0; j<sutun; j++)
        {
            printf("%d. sat�r�n %d. eleman�: ", i+1, j+1);
            scanf("%d", &matris1[i][j]);
        }

    }

    printf("\n2. MATR�S \n");

    for(i=0; i<satir; i++)
    {
        for(j=0; j<sutun; j++)
        {
            printf("%d. sat�r�n %d. eleman�: ", i+1, j+1);
            scanf("%d", &matris2[i][j]);
        }

    }

    printf("\n");

    for(i=0; i<satir; i++)
    {
        for(j=0; j<sutun; j++)
        {
            printf("%d ", matris1[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(i=0; i<satir; i++)
    {
        for(j=0; j<sutun; j++)
        {
            printf("%d ", matris2[i][j]);
        }
        printf("\n");
    }

    printf("\n �ki Matrisin Toplam�\n");

    for(i=0; i<satir; i++)
    {
        for(j=0; j<sutun; j++)
        {
            toplam[i][j] = matris1[i][j] + matris2[i][j];
        }
    }

    for(i=0; i<satir; i++)
    {
        for(j=0; j<sutun; j++)
        {
            printf("%d ", toplam[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}