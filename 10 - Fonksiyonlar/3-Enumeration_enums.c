#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

enum hafta{Pazartesi=1, Sali, Carsamba, Persembe, Cuma, Cumartesi, Pazar}; // Enumlar sabit deðerlerin indisinin atanmasýný ve belirlenmesini saðlayan araçlardýr. Diziler gibi  
// 0. indisten baþlar. istenilen elemana deðer atamasý yapýlabilir ve sonrasýnda gelen elemanlar onun bir fazlasýný alacak þekilde indislenir..

enum aylar{Ocak=1, Mart=3, Haziran=6, Eylul=9}; // Enumlar statelerden(durumlardan) oluþur. Örneðin aylar enumunda haziranýn durumu 6, martýn durumu 3 vs.

enum mevsimler{Ilkbahar=1, Kis, Sonbahar, Yaz};

enum ogrenciOkulKaydi{Aktif, Donmus=1, Silinmis=1};

enum macSonucu{Kazandi, Kaybetti};

int main()
{
    setlocale(LC_ALL,"Turkish");

    printf("Pazartesi: %d\n", Pazartesi);   
    printf("Salý: %d\n", Sali);
    printf("Çarþamba: %d\n", Carsamba);
    printf("Perþembe: %d\n", Persembe);
    printf("Cuma: %d\n", Cuma);
    printf("Cumartesi: %d\n", Cumartesi);
    printf("Pazar: %d\n", Pazar);

    for(int i=Pazartesi; i<=Pazar; i++) // i isimli integerý pazartesine eþitlemek pazartesinin indisine yani 1'e eþitlemektir. Pazardan küçük eþit demek ise pazarýn indisi olan 7'den
    {                                  // küçük olduðunu belirtmektir.
        printf("%d ", i);
    }
    printf("\n");

    enum mevsimler mevsim;  // mevsimler enumunu mevsim adýnda bir deðiþkene atayýp içinden istediðimiz deðeri çekmek mümkündür.
    mevsim = Sonbahar;
    printf("%d\n", mevsim);

    enum ogrenciOkulKaydi kayit;
    kayit = Donmus;
    //kayit = Silinmis;  //Duruma göre yorum satýrýndan çýkararak kullanýlabilir.
    //kayit = Aktif;
    if(kayit==0)
    {
        printf("Öðrenci derslere girebilir\n");
    }
    else if(kayit==1)
    {
        printf("Öðrenci derslere giremez\n");
    }

    enum macSonucu sonuc;
    sonuc = Kaybetti;

    (sonuc == Kazandi) ? printf("Maçý kazandý\n") : printf("Maçý kaybeti\n");

    return 0;
}