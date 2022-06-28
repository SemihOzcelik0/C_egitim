#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

enum hafta{Pazartesi=1, Sali, Carsamba, Persembe, Cuma, Cumartesi, Pazar}; // Enumlar sabit de�erlerin indisinin atanmas�n� ve belirlenmesini sa�layan ara�lard�r. Diziler gibi  
// 0. indisten ba�lar. istenilen elemana de�er atamas� yap�labilir ve sonras�nda gelen elemanlar onun bir fazlas�n� alacak �ekilde indislenir..

enum aylar{Ocak=1, Mart=3, Haziran=6, Eylul=9}; // Enumlar statelerden(durumlardan) olu�ur. �rne�in aylar enumunda haziran�n durumu 6, mart�n durumu 3 vs.

enum mevsimler{Ilkbahar=1, Kis, Sonbahar, Yaz};

enum ogrenciOkulKaydi{Aktif, Donmus=1, Silinmis=1};

enum macSonucu{Kazandi, Kaybetti};

int main()
{
    setlocale(LC_ALL,"Turkish");

    printf("Pazartesi: %d\n", Pazartesi);   
    printf("Sal�: %d\n", Sali);
    printf("�ar�amba: %d\n", Carsamba);
    printf("Per�embe: %d\n", Persembe);
    printf("Cuma: %d\n", Cuma);
    printf("Cumartesi: %d\n", Cumartesi);
    printf("Pazar: %d\n", Pazar);

    for(int i=Pazartesi; i<=Pazar; i++) // i isimli integer� pazartesine e�itlemek pazartesinin indisine yani 1'e e�itlemektir. Pazardan k���k e�it demek ise pazar�n indisi olan 7'den
    {                                  // k���k oldu�unu belirtmektir.
        printf("%d ", i);
    }
    printf("\n");

    enum mevsimler mevsim;  // mevsimler enumunu mevsim ad�nda bir de�i�kene atay�p i�inden istedi�imiz de�eri �ekmek m�mk�nd�r.
    mevsim = Sonbahar;
    printf("%d\n", mevsim);

    enum ogrenciOkulKaydi kayit;
    kayit = Donmus;
    //kayit = Silinmis;  //Duruma g�re yorum sat�r�ndan ��kararak kullan�labilir.
    //kayit = Aktif;
    if(kayit==0)
    {
        printf("��renci derslere girebilir\n");
    }
    else if(kayit==1)
    {
        printf("��renci derslere giremez\n");
    }

    enum macSonucu sonuc;
    sonuc = Kaybetti;

    (sonuc == Kazandi) ? printf("Ma�� kazand�\n") : printf("Ma�� kaybeti\n");

    return 0;
}