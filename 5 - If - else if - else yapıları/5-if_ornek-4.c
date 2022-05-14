#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL,"Turkish");

    float piece,price;
    
    printf("Lütfen kaç adet almak istediðinizi giriniz...\n");
    scanf("%f", &piece);

    if (piece >= 0 && piece < 100)
    {
        price = 3;
    }

    else if(piece >= 100 && piece < 200)
    {
        price = 2.85;
    }

    else if(piece >= 200 && piece < 300)
    {
        price = 2.55;
    }

    else if(piece >= 300 && piece < 400)
    {
        price = 2.35;
    }

    else if(piece >= 400)
    {
        price = 2.10;
    }

    else
    {
        printf("Lütfen almak istediðiniz ürün adedini doðru girin (Örn: 250)");
    }
    
    int salePrice = price * piece;                      // Float deðiþkeni olan "price * piece"i integer olarak tanýmlamak tamsayýya çevirip virgülden sonraki kýsmýn yok olmasýný saðladý.
    printf("Toplam tutar: %.2f TL\n", price * piece);
    printf("Size özel yapýlan iskonto: %.2f TL\n", (price * piece)- salePrice);
    printf("Ödemeniz gereken indirimli fiyat: %d TL", salePrice);

    return 0;
}