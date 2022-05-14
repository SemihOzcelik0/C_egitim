#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int puan;
    printf("Lütfen puanýnýzý giriniz..\n");
    scanf("%d", &puan);

    /* 
        5 > 4    <-->       5 >= 4  
        6 < 7    <-->       6 <= 7
        5 == 5    -->    5 eþit eþittir 5                           
        5 != 6    -->    5 eþit deðildir 6
    */
     if (puan >= 80 && puan <= 100){                        // Ve anlamýna gelen "&&" ile aralýk tanýmlanabilir.
        printf("Çok Ýyi Puan !!!");
    }   
    else if (puan >= 60 && puan <  80){                     // Yada anlamýna gelen "||" ile ayrý ayrý koþullar tanýmlanabilir
        printf("Ýyi Puan !!");
    }
    else if (puan >= 40 || puan <60){
        printf("Orta Puan !");
    }
    else if (puan >= 20){
        printf("Kötü Puan :/");
    }
    else if (puan >= 0){
        printf("Çok Kötü Puan :'(");
    }
    else {
        printf("Lütfen 0-100 arasýnda bir deðer giriniz..");
    }

    return 0;
}