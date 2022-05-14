#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");    // Switch seçim yapmayý saðlar, case durumlara göre gereken iþlemi yapar

    int secim;

    printf("Lütfen seçiminizi yapýnýz.\n");
    printf("1.Ýlkbahar\n2.Yaz\n3.Sonbahar\n4.Kýþ\n");
    scanf("%d", &secim);

    switch(secim){                                       // "secim" deðiþkeninden gelen veriye göre seç 

        case 1: printf("Hava çok güzel"); break;        // "secim" deðiþkenindeki veriye göre gereken durumun içine girer.
        case 2: printf("Hava çok sýcak"); break;
        case 3: printf("Hava serin ve rüzgarlý"); break;    // break komutu yazýlmazsa hangi case çalýþýrsa ardýndan gelen bütün case'leri ve default'u yazar.
        case 4:
            printf("Hava çok soðuk");                   // Alt alta biçimde de yazýlabilir.
            break;
        default: printf("\"1,2,3,4\" rakamlarýndan birini giriniz."); // default, else yapýsý gibi çalýþýr. Case yapýlarýndaki durumlardan herhangi biri karþýlanmazsa default çalýþýr.

    }

    return 0;
}