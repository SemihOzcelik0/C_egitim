#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int sayi;

    printf("L�tfen bir say� giriniz...\n");
    scanf("%d", &sayi);
    if (sayi %10 == 0)
    {
        printf("%d 10'a kalans�z b�l�n�yor",sayi);

    }
    else
    {
        printf("%d 10'a kalans�z b�l�nemiyor",sayi);
    }

    return 0;
}