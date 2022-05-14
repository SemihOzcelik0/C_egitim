#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int sayi;
    char ayinMevsimi;

    printf("1 ile 12 arasýnda bir sayý giriniz.\n");
    scanf("%d", &sayi);

    switch (sayi)
    {

    case 1:
        printf("%d numaralý ay: Ocak\n", sayi);
        ayinMevsimi = 'K';
        break;
    case 2:
        printf("%d numaralý ay: Þubat\n", sayi); 
        ayinMevsimi = 'K';
        break;
    case 3:
        printf("%d numaralý ay: Mart\n", sayi);
        ayinMevsimi = 'I';
        break;
    case 4:
        printf("%d numaralý ay: Nisan\n", sayi); 
        ayinMevsimi = 'I';
        break;
    case 5:
        printf("%d numaralý ay: Mayýs\n", sayi); 
        ayinMevsimi = 'I';
        break;
    case 6:
        printf("%d numaralý ay: Haziran\n", sayi); 
        ayinMevsimi = 'Y';
        break;
    case 7:
        printf("%d numaralý ay: Temmuz\n", sayi); 
        ayinMevsimi = 'Y';
        break;
    case 8:
        printf("%d numaralý ay: Aðustos\n", sayi); 
        ayinMevsimi = 'Y';
        break;
    case 9:
        printf("%d numaralý ay: Eylül\n", sayi); 
        ayinMevsimi = 'S';
        break;
    case 10:
        printf("%d numaralý ay: Ekim\n", sayi); 
        ayinMevsimi = 'S';
        break;
    case 11:
        printf("%d numaralý ay: Kasým\n", sayi); 
        ayinMevsimi = 'S';
        break;
    case 12:
        printf("%d numaralý ay: Aralýk\n", sayi); 
        ayinMevsimi = 'K';
        break;
    
    default:
        printf("Lütfen 1 ile 12 arasýnda bir sayý girdiðinize emin olunuz.\n"); 
        break;
    }

    if (ayinMevsimi == 'K')
    {
        printf("%d numaralý ayýn mevsimi kýþ'týr.", sayi);
    }
    else if(ayinMevsimi == 'I')
    {
        printf("%d numaralý ayýn mevsimi ilkbahar'dýr.", sayi);
    }
    else if(ayinMevsimi == 'Y')
    {
        printf("%d numaralý ayýn mevsimi yaz'dýr.", sayi);
    }
    else if(ayinMevsimi == 'S')
    {
        printf("%d numaralý ayýn mevsimi sonbahar'dýr.", sayi);
    }
    
    return 0;
}