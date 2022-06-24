#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

int main()
{
    setlocale(LC_ALL,"Turkish");                    // EN DOÐRUSU HER DÝZÝYE ELEMAN SAYISINI GÝRMEKTÝR // 

    char isim[4] = "Cam";   // char tanýmlarken diziye karakter sayýsýndan 1 fazla eleman atanýr çünkü dizinin sonlandýðýný otomatik olarak ramde \0 koyararak belirtir.
    // char isim[4] = {'C','a','m','\0'}; Þeklinde eleman eleman olarakta tanýmlanabilir ancak böyle tanýmlanýrsa her eleman týrnak içerisinde ve son eleman \0 olacak þekilde

    for(int i=0; i<4; i++)
    {
        printf("Dizinin %d.elemaný: %c\n", i, isim[i]);    // isim adlý dizinin son karakter olarak \0'ý otomatik olarak eklediðini döngüdeki if sayesinde gördük.
        if(isim[i]=='\0'){printf("Dizi tamamlandý\n");}
    }

    int sayilar[] = {1,2,3,4,5};    
    for (int i=0; i<5; i++)             // Eðer dizinin deðerleri küme içerisinde yazýlmýþsa eleman sayýsýnýn belirtilmesi þart deðildir.
    {printf("%d ", sayilar[i]);}

    char takimIsmi[] ="Barça";         // Eleman sayýsýnýn belirtilmesi zorunlu deðildir, kendi otomatik belirleyebilir.
    printf("%s\n", takimIsmi);        // Char deðiþkeni karakter olarak kullanýlacaksa %c, direkt kelime olarak string þeklinde alýnacaksa %s ile kullanýlýr.

    char ulkeler[5];
    printf("Lütfen bir karakter dizisi giriniz..\n");
    scanf("%s", ulkeler);           //Karakter dizisi için scanf komutu kullanýlýrken ampersand(&) iþaretinin kullanýlmasý þart deðildir, olmasa da doðru çalýþýr.
    printf("%s\n", ulkeler);    // Belirlenen eleman sayýsý farketmeksizin char deðiþkenlerine deðer atanabilir. Eleman sayýsý 5 olarak belirtilmiþ olsada girilecek
                             // karakterler için herhangi bir sýnýrlama yoktur, 5 elemanýn devamýna ekleme yapar.

    char city[8];                          
    for(int i=0; i<6; i++)                  
    {
        printf("Bir harf giriniz --> ");    // Girilecek harf sayýsýndan 1 fazla olacak þekilde char deðiþkeninin eleman sayýsý belirlenmelidir.
        scanf(" %c", &city[i]);
    } 
    printf("%s", city);
    printf("XXXXXXXXXX");



    return 0;
}