#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int sayi;

    printf("Bir say� giriniz...\n");   // Pointer bir de�i�kenin ba�lang�� noktas�n�n ram'de nerede ba�lad���n� g�rmemizi sa�layan bir fonksiyondur.
    scanf("%d", &sayi);

    int *sayininAdresi;     // Bir de�i�kene pointer oldu�unu s�ylemek i�in ba��na * koyulur. Bu de�i�ken art�k s�radan integer gibi tamsay� de�il ram adresi tutacak bir de�i�kendir
    sayininAdresi = &sayi; // sayininAdresi adl� pointer� sayi isimli integer de�i�kenin & kullanarak adresine atad�k. Art�k sayininAdresi, sayi de�i�keninin ramde nerede
                          // bulundu�unu tutan bir pointer oldu.

    printf("%d %x\n", *sayininAdresi, sayininAdresi); // "%d, sayininAdresi" ile sayininAdresi isimli pointer�n tuttu�u adrese gidip ba��ndaki y�ld�z(*) sayesinde o adresin i�ine
                                        // girip i�erdeki de�eri yazd�rmas�n� sa�lad�k. %x ile sayininAdresi pointer�n�n tuttu�u adresin neresi oldu�unu yazd�rd�k.

    printf("%d %x\n\n", sayi, &sayi);   // "%d,sayi" do�rudan integer de�i�kenin tuttu�u tamsay�y� yazd�rmam�z� sa�larken, derleyiciye %x ile bir adres yazaca��n�, de�i�kenin ba��na
                            // & koyarakta yaz�lacak de�i�kenin adresini belirtmesini sa�lad�k ve sayi de�i�keninin adresini g�rm�� olduk.
    

    // `````````````````````````````````````````````````````````````````` Pointer+1 ve Hexdecimal Toplama ``````````````````````````````````````````````````````````````````````````````

    int sayi2=12, *sayiAdresi;
    float kesirliSayi = 5.7, *kesirliSayiAdresi;
    double buyukKesirliSayi = 7.8, *buyukKesirliSayiAdresi;
    char karakter='K', *karakterAdresi;

    printf("%d\n", sayi2);
    printf("%f\n", kesirliSayi);
    printf("%lf\n", buyukKesirliSayi);
    printf("%c\n", karakter);

    sayiAdresi = &sayi2;
    kesirliSayiAdresi = &kesirliSayi;
    buyukKesirliSayiAdresi = &buyukKesirliSayi;
    karakterAdresi = &karakter;

    printf("%d       %x\n", *sayiAdresi, sayiAdresi);
    printf("%.1f     %x\n", *kesirliSayiAdresi, kesirliSayiAdresi);
    printf("%.1lf    %x\n", *buyukKesirliSayiAdresi, buyukKesirliSayiAdresi);
    printf("%c       %x\n", *karakterAdresi, karakterAdresi);

    printf("Double'�n adresi +1: %x\n", buyukKesirliSayiAdresi + 1); //Double de�i�keninin adresine 1 eklemek bu de�i�ken i�in ayr�lm�� alandan sonraki adres demek. Arada 8 birimlik 
                                                                    // bir fark olmas�n�n sebebi double'�n ramde 8byte yer kaplamas�.
    printf("Float'�n adresi +1: %x\n", kesirliSayiAdresi + 1);
    printf("�nt'in adresi +1: %x\n", sayiAdresi + 1);
    printf("Char'�n adresi +1: %x\n\n\n", karakterAdresi + 1);


    // ```````````````````````````````````````````````````````````````````````````` Dizilerde Pointer ``````````````````````````````````````````````````````````````````````````````````

    int sayilar[6] = {1,2,3,4,5,6};
    
    printf("%x\n", &sayilar);    // --> sayilar dizisinin ram'de ba�lad��� noktan�n adresi
    printf("%x\n", &sayilar[0]); // --> sayilar dizisinin 1.eleman�n�n ba�lad��� yani dizinin ba�lad��� noktan�n adresi
    printf("%x\n", &sayilar[2]); // --> sayilar dizisinin 3. eleman�n�n ba�lad��� noktan�n adresi (her elemena 4 byte yani ba�lang�� noktas�n�n 8 fazlas�)

    for(int i=0; i<6; i++)
    {
        printf("%d. indisin adresi: %x\n", i, &sayilar[i]);
    }

    int *sayilarDiziAdres = &sayilar;

    for(int i=0; i<6; i++)
    {
        printf("%d\n", *sayilarDiziAdres + i);
    }

    return 0;
}