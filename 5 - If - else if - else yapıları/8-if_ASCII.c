#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    char karakter1, karakter2;                  //ASCII deðerleri integer tipinde tutulur ve char deðiþkenini integer olarak yazdýrmasýný istersek bize ASCII deðerini verir

    printf("ASCII deðerini öðrenmek istediðiniz karakteri giriniz\n");
    scanf("%c", &karakter1);

    printf("%c karakterinin ASCII deðeri: %d\n",karakter1, karakter1);

    /* ASCII deðerlerinde büyük harfler 65'den baþlayýp 90'a kadar gitmektedir. Küçük harfler ise 97 - 122 aralýðýndadýr. */
    
    int ASCII = karakter1;

    if ( ASCII >= 65 && ASCII <= 90)
    {
        printf("%c harfi büyük harftir.", karakter1);
    }
    else if( ASCII >=97 && ASCII <= 122)
    {
        printf("%c harfi küçük harftir.", karakter1);
    }
    else{
        printf("Lütfen bir \"harf\" giriniz !!");
    }
    

    return 0;
}