#include <stdio.h>
#include <stdlib.h>

#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int sayi;
    float kesirliSayi;
    double kesirliSayi2;
    char karakter;
    char karakterdizisi[5];                                // Deðiþken olarak atayýp kod içerisinde dolduracaksak ayrýlmasý gereken byte'ýn belirtilmesi gerekir.
    char karakterdizisi2[] = "Kaan Academy";              // Eðer karakter dizisi tanýmlarken içine ram'de ayýrmasý gereken byte'ý belirtmezsek otomatik olarak ayýrýr.

    printf("Lütfen bir integer deðeri giriniz\n");
    scanf("%d", &sayi);

    printf("Lütfen bir float deðeri giriniz\n");
    scanf("%f", &kesirliSayi);                                                                  // ÖNEMLÝ //

    printf("Lütfen bir double deðeri giriniz\n");       // Double deðiþkeni ram'de 8 byte yer kaplar "%f" ile tanýmlanýrsa float gibi deðerlendirilip 4 byte yer
    scanf("%lf", &kesirliSayi2);                       // ayrýlýr ve kod hata verir. Bu yüzden "%lf" yani long float þeklinde atama yapýlmasý gerekir. 
                                                      // printf için böyle bir zorunluluk bulunmaz. %lf veya %f þeklinde yazdýrýlabilir.
    printf("Lütfen bir karakter giriniz\n");            
    scanf(" %c", &karakter);                          // Char deðiþkenine yazdýrýlýrken " %c" þeklinde bir boþluk býrakýlmasý gerekmektedir, aksi halde çalýþmaz.

    printf("Lütfen 4 haneli karakter giriniz\n");     // Karakter dizisi için scanf komutu kullanýlýrken ampersand(&) iþaretinin kullanýlmasý þart deðildir, olmasa da doðru çalýþýr.
    scanf("%s", karakterdizisi);

    printf("Girdiðiniz integer : %d\n", sayi);
    printf("Girdiðiniz float : %f\n", kesirliSayi);
    printf("Girdiðiniz double : %lf\n", kesirliSayi2);
    printf("Girdiðiniz karakter : %c\n", karakter);
    printf("Girdiðiniz dört karakter : %s\n", karakterdizisi);

    return 0;
}