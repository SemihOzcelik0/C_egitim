#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    float sayi, buyuk = 0;
    char devam;
    
    do{
        printf("Lütfen bir sayý giriniz...\n");
        scanf("%f", &sayi);

        if (sayi>buyuk)
        {
            buyuk=sayi;
            printf("Yeni büyük sayýmýz = %.0f\n", buyuk);
        }
        else
        {
            printf("Büyük sayý halen deðiþmedi\nBuyuk sayi = %.0f\n", buyuk);
        }



        printf("Büyük sayýyý hesaplamaya devam etmek istiyor musunuz ? [E / H] \n");
        scanf(" %c", &devam);  // ÖNEMLÝ --> birden fazla scanf alýrken ram mantýðýnda char öncekine bitiþik okunduðu için %c'den önce 1 karakter boþluk býrakmak gerek.
    }while( devam == 'E' || devam == 'e');


    printf("Program Sonlandý..");
    return 0;
}