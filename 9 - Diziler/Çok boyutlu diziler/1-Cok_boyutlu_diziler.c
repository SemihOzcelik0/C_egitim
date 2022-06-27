#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int satir, sutun;

    int cokBoyutluDizi [3][2]= {1,2,3,4,5,6};  // 3 sat�r 2 s�tunluk toplamda 6 eleman� olan �ok boyutlu dizi.

    printf("%d\n", cokBoyutluDizi[0][0]);   
    printf("%d\n", cokBoyutluDizi[0][1]);
    printf("%d\n", cokBoyutluDizi[1][0]);
    printf("%d\n", cokBoyutluDizi[1][1]);
    printf("%d\n", cokBoyutluDizi[2][0]);
    printf("%d\n", cokBoyutluDizi[2][1]);

    int cokBoyutluDizi2 [3][2]= {{11,12}, {13,14}, {15,16}};  //Her sat�r�n elemanlar� s�sl� parantez i�inde bu �ekilde g�sterilebilir.

    printf("%d\n", cokBoyutluDizi2[0][0]);   
    printf("%d\n", cokBoyutluDizi2[0][1]);
    printf("%d\n", cokBoyutluDizi2[1][0]);
    printf("%d\n", cokBoyutluDizi2[1][1]);
    printf("%d\n", cokBoyutluDizi2[2][0]);
    printf("%d\n", cokBoyutluDizi2[2][1]);

    int cokBoyutluDizi3 [3][2]= {1,2,3,4,5,6}; // for ile dizinin i�inde gezerek yazd�rma

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("%d ", cokBoyutluDizi3[i][j]);
        }
        printf("\n");
    }

    printf("Ka� sat�r istiyorsunuz?\n");scanf("%d", &satir);
    printf("Ka� s�t�n istiyorsunuz?\n");scanf("%d", &sutun);

    int cokBoyutluDizi4 [satir][sutun];

    for(int i=0; i<satir; i++)
    {
        for(int j=0; j<sutun; j++)
        {
            printf("%d. sat�r�n %d. eleman�n� giriniz..\n", i+1, j+1);scanf("%d", &cokBoyutluDizi4[i][j]);
        }
    }
    for(int i=0; i<satir; i++)
    {
        for(int j=0; j<sutun; j++){
            printf("%d ", cokBoyutluDizi4[i][j]);
        }
        printf("\n");
    }

    int ucBoyutluDizi[2][3][4];

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            for(int k=0; k<4; k++)
            {
                printf("%d. sat�r�n %d. s�tunun %d. h�cresinin eleman�n� giriniz.\n", i+1, j+1, k+1);
                scanf("%d", &ucBoyutluDizi[i][j][k]);
            }
        }
    }
 
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            for(int k=0; k<4; k++)
            {
                printf("%d ", ucBoyutluDizi[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }


    return 0;
}