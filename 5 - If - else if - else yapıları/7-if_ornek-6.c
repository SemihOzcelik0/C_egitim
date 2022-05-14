#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int sayi;

    printf("Tek mi çift mi olduðunu öðrenmek istediðiniz sayýyý giriniz.\n");
    scanf("%d", &sayi);

    if (sayi % 2 == 0)
    {
        printf("%d sayýsý bir çift sayý", sayi); 
    }
    else{
        printf("%d sayýsý bir tek sayý", sayi);
    }
    

    return 0;
}