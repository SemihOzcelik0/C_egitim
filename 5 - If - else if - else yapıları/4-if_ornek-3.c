#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");                            

    char sex;
    int boy;

    printf("Lütfen cinsiyetinizi giriniz (E / K)\n");
    scanf("%c",&sex);
    printf("Boyunuzu cm cinsinden giriniz (Örn: 185 )\n");
    scanf("%d", &boy);

    if ( (sex == 'E' || sex == 'e' && boy >= 160) && boy <= 210)   // Birden fazla farklý durumu belirtirken hata oluþmamasý için durumlar parantezle ayrýlýr
    {
        printf("Tebrikler asker olabilirsiniz !!");                // Eðer parantez kullanýlmazsa kod saðdan sola biçiminde okunduðu için ilk yazýlan koþul diðerlerinin
 
    }                                                              // üzerinde "1" yani true deðeri alýr ve koþul saðlanmýþ gibi kabul edilir parantez kullanýmý önemlidir.

    else if( (sex == 'K' || sex == 'k' && boy >= 150) && boy <= 210)
    {
        printf("Tebrikler asker olabilirsiniz !!");
    
    }
    else
    {
        printf("Malesef asker olabilme þartlarýný karþýlamýyorsunuz...");
    }

    return 0;
}