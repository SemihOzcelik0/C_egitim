#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int satir, sutun;

    int cokBoyutluDizi [3][2]= {1,2,3,4,5,6};  // 3 satýr 2 sütunluk toplamda 6 elemaný olan çok boyutlu dizi.

    printf("%d\n", cokBoyutluDizi[0][0]);   
    printf("%d\n", cokBoyutluDizi[0][1]);
    printf("%d\n", cokBoyutluDizi[1][0]);
    printf("%d\n", cokBoyutluDizi[1][1]);
    printf("%d\n", cokBoyutluDizi[2][0]);
    printf("%d\n", cokBoyutluDizi[2][1]);

    int cokBoyutluDizi2 [3][2]= {{11,12}, {13,14}, {15,16}};  //Her satýrýn elemanlarý süslü parantez içinde bu þekilde gösterilebilir.

    printf("%d\n", cokBoyutluDizi2[0][0]);   
    printf("%d\n", cokBoyutluDizi2[0][1]);
    printf("%d\n", cokBoyutluDizi2[1][0]);
    printf("%d\n", cokBoyutluDizi2[1][1]);
    printf("%d\n", cokBoyutluDizi2[2][0]);
    printf("%d\n", cokBoyutluDizi2[2][1]);

    int cokBoyutluDizi3 [3][2]= {1,2,3,4,5,6}; // for ile dizinin içinde gezerek yazdýrma

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("%d ", cokBoyutluDizi3[i][j]);
        }
        printf("\n");
    }

    printf("Kaç satýr istiyorsunuz?\n");scanf("%d", &satir);
    printf("Kaç sütün istiyorsunuz?\n");scanf("%d", &sutun);

    int cokBoyutluDizi4 [satir][sutun];

    for(int i=0; i<satir; i++)
    {
        for(int j=0; j<sutun; j++)
        {
            printf("%d. satýrýn %d. elemanýný giriniz..\n", i+1, j+1);scanf("%d", &cokBoyutluDizi4[i][j]);
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
                printf("%d. satýrýn %d. sütunun %d. hücresinin elemanýný giriniz.\n", i+1, j+1, k+1);
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