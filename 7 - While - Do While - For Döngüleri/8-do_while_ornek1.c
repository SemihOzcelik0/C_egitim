#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    float sayi, buyuk = 0;
    char devam;
    
    do{
        printf("L�tfen bir say� giriniz...\n");
        scanf("%f", &sayi);

        if (sayi>buyuk)
        {
            buyuk=sayi;
            printf("Yeni b�y�k say�m�z = %.0f\n", buyuk);
        }
        else
        {
            printf("B�y�k say� halen de�i�medi\nBuyuk sayi = %.0f\n", buyuk);
        }



        printf("B�y�k say�y� hesaplamaya devam etmek istiyor musunuz ? [E / H] \n");
        scanf(" %c", &devam);  // �NEML� --> birden fazla scanf al�rken ram mant���nda char �ncekine biti�ik okundu�u i�in %c'den �nce 1 karakter bo�luk b�rakmak gerek.
    }while( devam == 'E' || devam == 'e');


    printf("Program Sonland�..");
    return 0;
}