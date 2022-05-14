#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int sayi;
    char ayinMevsimi;

    printf("1 ile 12 aras�nda bir say� giriniz.\n");
    scanf("%d", &sayi);

    switch (sayi)
    {

    case 1:
        printf("%d numaral� ay: Ocak\n", sayi);
        ayinMevsimi = 'K';
        break;
    case 2:
        printf("%d numaral� ay: �ubat\n", sayi); 
        ayinMevsimi = 'K';
        break;
    case 3:
        printf("%d numaral� ay: Mart\n", sayi);
        ayinMevsimi = 'I';
        break;
    case 4:
        printf("%d numaral� ay: Nisan\n", sayi); 
        ayinMevsimi = 'I';
        break;
    case 5:
        printf("%d numaral� ay: May�s\n", sayi); 
        ayinMevsimi = 'I';
        break;
    case 6:
        printf("%d numaral� ay: Haziran\n", sayi); 
        ayinMevsimi = 'Y';
        break;
    case 7:
        printf("%d numaral� ay: Temmuz\n", sayi); 
        ayinMevsimi = 'Y';
        break;
    case 8:
        printf("%d numaral� ay: A�ustos\n", sayi); 
        ayinMevsimi = 'Y';
        break;
    case 9:
        printf("%d numaral� ay: Eyl�l\n", sayi); 
        ayinMevsimi = 'S';
        break;
    case 10:
        printf("%d numaral� ay: Ekim\n", sayi); 
        ayinMevsimi = 'S';
        break;
    case 11:
        printf("%d numaral� ay: Kas�m\n", sayi); 
        ayinMevsimi = 'S';
        break;
    case 12:
        printf("%d numaral� ay: Aral�k\n", sayi); 
        ayinMevsimi = 'K';
        break;
    
    default:
        printf("L�tfen 1 ile 12 aras�nda bir say� girdi�inize emin olunuz.\n"); 
        break;
    }

    if (ayinMevsimi == 'K')
    {
        printf("%d numaral� ay�n mevsimi k��'t�r.", sayi);
    }
    else if(ayinMevsimi == 'I')
    {
        printf("%d numaral� ay�n mevsimi ilkbahar'd�r.", sayi);
    }
    else if(ayinMevsimi == 'Y')
    {
        printf("%d numaral� ay�n mevsimi yaz'd�r.", sayi);
    }
    else if(ayinMevsimi == 'S')
    {
        printf("%d numaral� ay�n mevsimi sonbahar'd�r.", sayi);
    }
    
    return 0;
}