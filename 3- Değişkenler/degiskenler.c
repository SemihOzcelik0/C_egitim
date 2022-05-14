#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"Turkish");

    int tamsayi = 6;                       // Ram'de 4 byte yer kaplayan tamsayý deðiþkenidir. "%d"
    double kesirli_sayi = 7.21231;        // Ram'de 8 byte yer kaplayan virgülden sonra 10 basaðama kadar tutabilen deðiþkendir. "%f"
    float kesirli_sayi2 = 5.6;           // Ram'de 4 byte yer kaplayan irgülden sonra 6 basaðama kadar tutabilen deðiþkendir "f"
    short int tamsayi2 = 2 ;            // Ram'de 2 byte yer kaplayan tamsayý deðiþkenidir. Artýk sýk kullanýlmaz.
    long int tamsayi3 = 957123;        // Ram'de 4 byte yer kaplayan tamsayý deðiþkenidir. Artýk sýk kullanýlmaz.
    char harf = 'K';                  // Ram'de 1 byte yer kaplayan 1 harf tutan deðiþkendir. Tek karakter '' iþaretleri arasýnda, diziler "" arasýnda yazýlýr. "%c"
    char karakterDizisi[13] = "Kaan Academy";  /* Char deðiþkenine birden fazla harf tutabilmesi için köþeli parantezde tutacaðý harf adeti +1 þeklinde belirlenir (Boþluklar dahil). "%s"
                                              Ramde byte baþýna bir harf yerleþir ve dizinin sonlandýðýný belirtmek için fazladan eklediðimiz 1 byte'a \0 yazar ve sonlandýrýr.*/
    char karakterOrnegi[13] = {'K','a','a','n',' ','A','c','a','d','e','m','y'}; //14.Satýrdaki karakter dizisinin farklý bir yazým biçimi.

    printf("int deðiþkeni : %10d\n", tamsayi);           //"%10d" þeklinde sayýdan önce 10 satýr boþluk býrakýp tanýmlanmýþ sayý yazdýrýlabilir.
    printf("double deðiþkeni : %.5f\n", kesirli_sayi);  //"%.2f" þeklinde virgülden sonra kaç basamaðýn yazdýrýlacaðý ayarlanabilir.
    printf("float deðiþkeni : %.1f Ram'de %d byte yer kaplar\n", kesirli_sayi2, sizeof(float)); //sizeof komutu ile bellekte kapladýðý yer öðrenilip printf içerisinde %d ile yazdýrýlabilir.
    printf("short int deðiþkeni : %d\n", tamsayi2);
    printf("long int deðiþkeni : %d\n", tamsayi3);
    printf("char deðiþkeni : %c\n", harf);
    printf("char dizisi : %s\n", karakterDizisi);
    printf("char örneði : %s\n", karakterOrnegi);

    return 0;
}