#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//              s1 ve s2 deðiþkenler       Büyükse sayi1 = 1
#define enBuyukSayi(sayi1,sayi2) (sayi1>sayi2) ? sayi1 : sayi2              // MAKRO TANIMLAMA //
// eBS = fonk adý             s1 s2'den büyük mü        Deðilse sayi2 = 1

#define saatiSoyle(karakter) (karakter == 'E' || karakter == 'e') ? __TIME__ : "Kullanýcý saati öðrenmek istemiyor"

#define sayilariTopla(sayi1, sayi2) (1) sayi1+sayi2 // Herhangi bir koþul olmadýðý için doðrudan (1) þeklinde yazdýk ve þart olmadýðýndan ikinci bir sonuç girmemize gerek kalmadý
                                                    // Fonkisyonda bir þart olmadýðý için ? koyulmaz.

#define sayiMiKarakterMi(karakter) (karakter == 'k' || karakter == 'K') ? karakter : 5 //Kod çalýþmayacaktýr çünkü makrolarda giren veri tipi neyse çýkanlarda ayný olmalýdýr.
                                                                                // 5 bastýrmak istiyorsak '5' þeklinde karaktere çevirip bastýrabiliriz.

#define sayi 25 //sayi isimli elemanýn 25'e eþit olduðunu tanýmladýk.

#define yazdir printf //Printf fonksiyonunun yazdir ismine atamasýný saðladýk. Bu þekilde makro kullanýmlarý da yapýlabilir.                                                            
int main()
{
    setlocale(LC_ALL,"Turkish"); 
    char saat, karak;

    printf("%d\n", enBuyukSayi(4,2));
     
    printf("Saati öðrenmek istiyor musunuz ?\n");scanf("%c", &saat);
    printf("%s\n", saatiSoyle(saat));
    
    printf("Sayý mý karakter mi ? [K, S]\n");scanf(" %c", &karak);
    printf("%c\n", sayiMiKarakterMi(karak));

    printf("%d\n", sayi);

    yazdir("%d", sayi); //Printf yerine makro olarak tanýmladýðýmýz yazdir isimli elemaný kullandýk.
    return 0;
}