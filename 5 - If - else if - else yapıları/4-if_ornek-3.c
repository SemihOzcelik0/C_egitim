#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");                            

    char sex;
    int boy;

    printf("L�tfen cinsiyetinizi giriniz (E / K)\n");
    scanf("%c",&sex);
    printf("Boyunuzu cm cinsinden giriniz (�rn: 185 )\n");
    scanf("%d", &boy);

    if ( (sex == 'E' || sex == 'e' && boy >= 160) && boy <= 210)   // Birden fazla farkl� durumu belirtirken hata olu�mamas� i�in durumlar parantezle ayr�l�r
    {
        printf("Tebrikler asker olabilirsiniz !!");                // E�er parantez kullan�lmazsa kod sa�dan sola bi�iminde okundu�u i�in ilk yaz�lan ko�ul di�erlerinin
 
    }                                                              // �zerinde "1" yani true de�eri al�r ve ko�ul sa�lanm�� gibi kabul edilir parantez kullan�m� �nemlidir.

    else if( (sex == 'K' || sex == 'k' && boy >= 150) && boy <= 210)
    {
        printf("Tebrikler asker olabilirsiniz !!");
    
    }
    else
    {
        printf("Malesef asker olabilme �artlar�n� kar��lam�yorsunuz...");
    }

    return 0;
}