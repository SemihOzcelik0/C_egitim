#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int sayi;

    printf("Lütfen bir sayý giriniz...\n");
    scanf("%d", &sayi);
    if (sayi %10 == 0)
    {
        printf("%d 10'a kalansýz bölünüyor",sayi);

    }
    else
    {
        printf("%d 10'a kalansýz bölünemiyor",sayi);
    }

    return 0;
}