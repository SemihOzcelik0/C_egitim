#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//              s1 ve s2 de�i�kenler       B�y�kse sayi1 = 1
#define enBuyukSayi(sayi1,sayi2) (sayi1>sayi2) ? sayi1 : sayi2              // MAKRO TANIMLAMA //
// eBS = fonk ad�             s1 s2'den b�y�k m�        De�ilse sayi2 = 1

#define saatiSoyle(karakter) (karakter == 'E' || karakter == 'e') ? __TIME__ : "Kullan�c� saati ��renmek istemiyor"

#define sayilariTopla(sayi1, sayi2) (1) sayi1+sayi2 // Herhangi bir ko�ul olmad��� i�in do�rudan (1) �eklinde yazd�k ve �art olmad���ndan ikinci bir sonu� girmemize gerek kalmad�
                                                    // Fonkisyonda bir �art olmad��� i�in ? koyulmaz.

#define sayiMiKarakterMi(karakter) (karakter == 'k' || karakter == 'K') ? karakter : 5 //Kod �al��mayacakt�r ��nk� makrolarda giren veri tipi neyse ��kanlarda ayn� olmal�d�r.
                                                                                // 5 bast�rmak istiyorsak '5' �eklinde karaktere �evirip bast�rabiliriz.

#define sayi 25 //sayi isimli eleman�n 25'e e�it oldu�unu tan�mlad�k.

#define yazdir printf //Printf fonksiyonunun yazdir ismine atamas�n� sa�lad�k. Bu �ekilde makro kullan�mlar� da yap�labilir.                                                            
int main()
{
    setlocale(LC_ALL,"Turkish"); 
    char saat, karak;

    printf("%d\n", enBuyukSayi(4,2));
     
    printf("Saati ��renmek istiyor musunuz ?\n");scanf("%c", &saat);
    printf("%s\n", saatiSoyle(saat));
    
    printf("Say� m� karakter mi ? [K, S]\n");scanf(" %c", &karak);
    printf("%c\n", sayiMiKarakterMi(karak));

    printf("%d\n", sayi);

    yazdir("%d", sayi); //Printf yerine makro olarak tan�mlad���m�z yazdir isimli eleman� kulland�k.
    return 0;
}