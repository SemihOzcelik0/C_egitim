#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int sayi, onbinler, binler, yuzler, onlar, birler;

    printf("5 basamaklý bir sayý giriniz..\n\a");
    scanf("%d", &sayi);

    onbinler = sayi / 10000; //Sayýnýn onbinler basamaðýný bulmak için 10.000'e bölüyoruz ve veri tipi integer olduðu için virgülden sonraki kýsým görülmüyor ve istediðimiz deðere ulaþýyoruz.
    binler = (sayi % 10000) / 1000;
    yuzler = (sayi % 1000) / 100 ;
    onlar = (sayi % 100) / 10 ;
    birler = (sayi % 10) /1;

    printf("%d     %d     %d     %d     %d", onbinler, binler, yuzler, onlar,birler);

    return 0;
}