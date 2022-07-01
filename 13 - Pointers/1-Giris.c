#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int sayi;

    printf("Bir sayý giriniz...\n");   // Pointer bir deðiþkenin baþlangýç noktasýnýn ram'de nerede baþladýðýný görmemizi saðlayan bir fonksiyondur.
    scanf("%d", &sayi);

    int *sayininAdresi;     // Bir deðiþkene pointer olduðunu söylemek için baþýna * koyulur. Bu deðiþken artýk sýradan integer gibi tamsayý deðil ram adresi tutacak bir deðiþkendir
    sayininAdresi = &sayi; // sayininAdresi adlý pointerý sayi isimli integer deðiþkenin & kullanarak adresine atadýk. Artýk sayininAdresi, sayi deðiþkeninin ramde nerede
                          // bulunduðunu tutan bir pointer oldu.

    printf("%d %x\n", *sayininAdresi, sayininAdresi); // "%d, sayininAdresi" ile sayininAdresi isimli pointerýn tuttuðu adrese gidip baþýndaki yýldýz(*) sayesinde o adresin içine
                                        // girip içerdeki deðeri yazdýrmasýný saðladýk. %x ile sayininAdresi pointerýnýn tuttuðu adresin neresi olduðunu yazdýrdýk.

    printf("%d %x\n\n", sayi, &sayi);   // "%d,sayi" doðrudan integer deðiþkenin tuttuðu tamsayýyý yazdýrmamýzý saðlarken, derleyiciye %x ile bir adres yazacaðýný, deðiþkenin baþýna
                            // & koyarakta yazýlacak deðiþkenin adresini belirtmesini saðladýk ve sayi deðiþkeninin adresini görmüþ olduk.
    

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

    printf("Double'ýn adresi +1: %x\n", buyukKesirliSayiAdresi + 1); //Double deðiþkeninin adresine 1 eklemek bu deðiþken için ayrýlmýþ alandan sonraki adres demek. Arada 8 birimlik 
                                                                    // bir fark olmasýnýn sebebi double'ýn ramde 8byte yer kaplamasý.
    printf("Float'ýn adresi +1: %x\n", kesirliSayiAdresi + 1);
    printf("Ýnt'in adresi +1: %x\n", sayiAdresi + 1);
    printf("Char'ýn adresi +1: %x\n\n\n", karakterAdresi + 1);


    // ```````````````````````````````````````````````````````````````````````````` Dizilerde Pointer ``````````````````````````````````````````````````````````````````````````````````

    int sayilar[6] = {1,2,3,4,5,6};
    
    printf("%x\n", &sayilar);    // --> sayilar dizisinin ram'de baþladýðý noktanýn adresi
    printf("%x\n", &sayilar[0]); // --> sayilar dizisinin 1.elemanýnýn baþladýðý yani dizinin baþladýðý noktanýn adresi
    printf("%x\n", &sayilar[2]); // --> sayilar dizisinin 3. elemanýnýn baþladýðý noktanýn adresi (her elemena 4 byte yani baþlangýç noktasýnýn 8 fazlasý)

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