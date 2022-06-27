#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int satir, sutun, i, j;
    
    printf("Oluþturacaðýnýz iki matris kaç satýr ve sütundan oluþsun ?\n");
    printf("Satýr: ");scanf("%d", &satir);
    printf("Sütun: ");scanf("%d", &sutun);

    int matris1[satir][sutun];
    int matris2[satir][sutun];
    int toplam[satir][sutun];

    printf("1. MATRÝS \n");

    for(i=0; i<satir; i++)
    {
        for(j=0; j<sutun; j++)
        {
            printf("%d. satýrýn %d. elemaný: ", i+1, j+1);
            scanf("%d", &matris1[i][j]);
        }

    }

    printf("\n2. MATRÝS \n");

    for(i=0; i<satir; i++)
    {
        for(j=0; j<sutun; j++)
        {
            printf("%d. satýrýn %d. elemaný: ", i+1, j+1);
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

    printf("\n Ýki Matrisin Toplamý\n");

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