#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int sayi1, sayi2;

    printf("B�y�k say�y� giriniz\n");
    scanf("%d", &sayi1);
    printf("K���k say�y� giriniz\n");
    scanf("%d", &sayi2);

    if (sayi1 % sayi2 == 0)
    {
        printf("%d, %d say�s�n�n bir tam kat�d�r.", sayi2, sayi1);
    }
    else{
        printf("t�h");
    }
    
    return 0;
}