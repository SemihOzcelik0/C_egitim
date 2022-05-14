#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL,"Turkish");

    float piece,price;
    
    printf("L�tfen ka� adet almak istedi�inizi giriniz...\n");
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
        printf("L�tfen almak istedi�iniz �r�n adedini do�ru girin (�rn: 250)");
    }
    
    int salePrice = price * piece;                      // Float de�i�keni olan "price * piece"i integer olarak tan�mlamak tamsay�ya �evirip virg�lden sonraki k�sm�n yok olmas�n� sa�lad�.
    printf("Toplam tutar: %.2f TL\n", price * piece);
    printf("Size �zel yap�lan iskonto: %.2f TL\n", (price * piece)- salePrice);
    printf("�demeniz gereken indirimli fiyat: %d TL", salePrice);

    return 0;
}