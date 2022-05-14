#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int sayi1, sayi2;

    printf("Büyük sayýyý giriniz\n");
    scanf("%d", &sayi1);
    printf("Küçük sayýyý giriniz\n");
    scanf("%d", &sayi2);

    if (sayi1 % sayi2 == 0)
    {
        printf("%d, %d sayýsýnýn bir tam katýdýr.", sayi2, sayi1);
    }
    else{
        printf("tüh");
    }
    
    return 0;
}