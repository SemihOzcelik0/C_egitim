#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int sayi1, sayi2, sayilar, i, a=0, b=0, u;   
    char asda;

    printf("Bir sayý giriniz..\n");
    scanf("%d", &sayilar);

    if (sayilar % 2 == 0){sayilar += 1;}
    sayi1 = (sayilar*2) - 2;
    sayi2 = (sayilar/2)+2;

    for (int k=1; k<sayi1; k++)
    {
        
        for(i =(sayi1/2)+1; i<sayi1; i++)
        {
            printf(" ");
        }
        sayi1 -= 2;
        a += 1;
        for(int j=1; j<=a; j++)
        {
            printf("* ");
            
        }
        printf("\n");
        
    }

    for(int l=1; l<sayi2; l++)
    {
        for(i =(sayi1/2)-1; i<sayi1; i++)
        {
            printf(" ");
        }
        
        for(int j=1; j<=a; j++)
        {
            printf("* ");
            
        }
        sayi1 +=2;
        a -= 1;
        
        printf("\n");
        
    }
    

    return 0;
}