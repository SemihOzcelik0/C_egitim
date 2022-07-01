#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int sayi;

    printf("Bir sayı giriniz...\n");   // Pointer bir değişkenin başlangıç noktasının ram'de nerede başladığını görmemizi sağlayan bir fonksiyondur.
    scanf("%d", &sayi);

    int *sayininAdresi;     // Bir değişkene pointer olduğunu söylemek için başına * koyulur. Bu değişken artık sıradan integer gibi tamsayı değil ram adresi tutacak bir değişkendir
    sayininAdresi = &sayi; // sayininAdresi adlı pointerı sayi isimli integer değişkenin & kullanarak adresine atadık. Artık sayininAdresi, sayi değişkeninin ramde nerede
                          // bulunduğunu tutan bir pointer oldu.

    printf("%d %x\n", *sayininAdresi, sayininAdresi); // "%d, sayininAdresi" ile sayininAdresi isimli pointerın tuttuğu adrese gidip başındaki yıldız(*) sayesinde o adresin içine
                                        // girip içerdeki değeri yazdırmasını sağladık. %x ile sayininAdresi pointerının tuttuğu adresin neresi olduğunu yazdırdık.

    printf("%d %x\n\n", sayi, &sayi);   // "%d,sayi" doğrudan integer değişkenin tuttuğu tamsayıyı yazdırmamızı sağlarken, derleyiciye %x ile bir adres yazacağını, değişkenin başına
                            // & koyarakta yazılacak değişkenin adresini belirtmesini sağladık ve sayi değişkeninin adresini görmüş olduk.
    

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

    printf("Double'ın adresi +1: %x\n", buyukKesirliSayiAdresi + 1); //Double değişkeninin adresine 1 eklemek bu değişken için ayrılmış alandan sonraki adres demek. Arada 8 birimlik 
                                                                    // bir fark olmasının sebebi double'ın ramde 8byte yer kaplaması.
    printf("Float'ın adresi +1: %x\n", kesirliSayiAdresi + 1);
    printf("İnt'in adresi +1: %x\n", sayiAdresi + 1);
    printf("Char'ın adresi +1: %x\n\n\n", karakterAdresi + 1);


    // ```````````````````````````````````````````````````````````````````````````` Dizilerde Pointer ``````````````````````````````````````````````````````````````````````````````````

    int sayilar[6] = {1,2,3,4,5,6};
    
    printf("%x\n", &sayilar);    // --> sayilar dizisinin ram'de başladığı noktanın adresi
    printf("%x\n", &sayilar[0]); // --> sayilar dizisinin 1.elemanının başladığı yani dizinin başladığı noktanın adresi
    printf("%x\n", &sayilar[2]); // --> sayilar dizisinin 3. elemanının başladığı noktanın adresi (her elemena 4 byte yani başlangıç noktasının 8 fazlası)

    for(int i=0; i<6; i++)
    {
        printf("%d. indisin adresi: %x\n", i, &sayilar[i]);
    }

    int *sayilarDiziAdres = &sayilar;

    for(int i=0; i<6; i++)
    {
        printf("%d ", *sayilarDiziAdres + i);
    }

    return 0;
}
