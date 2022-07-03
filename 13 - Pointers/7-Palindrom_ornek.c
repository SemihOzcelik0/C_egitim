#include <stdio.h>
#include <string.h>
#include <locale.h>

/*int palindrom(char *array[])
{
    int boyut = strlen(array);
    char reverseArray[] = strrev(array);
    if(strcmp(*array, reverseArray) == 0)
    {return 1;}
    else{return 0;}
}*/

int main()
{
    setlocale(LC_ALL,"Turkish");

    char kelime[20];
    char *duzKelime, *tersKelime;
    
    printf("Palindrom olup olmadýðýný öðrenmek istediðiniz kelimeyi giriniz\n");
    scanf("%s", kelime);

    duzKelime = kelime;
    for(tersKelime=kelime; *tersKelime != NULL; tersKelime++); /* ";" ile sonlandýrýlan for döngüleri içindeki þartý tamamlayana kadar yapar ve sonlanýr, böyle bir kullaným mevcuttur.
    Döngünün çalýþma mantýðý terskelime pointerý kelime dizisinin adresiyle eþitlenir ardýndan pointerýn aldýðý adreste bir eleman olup olmadýðýný kontrol eder. Eleman varsa pointerýn
    tuttuðu adresi 1 artýrýr yani bir sonraki elemana geçer. Bu þekilde dizinin son elemanýnýn 1 fazlasý olan adrese kendini eþitler*/

    for(tersKelime--; tersKelime>=duzKelime;)
    {
        if(*duzKelime == *tersKelime)
        {
            duzKelime++;
            tersKelime--;
        }
        else{break;}
        
    }

    if(duzKelime > tersKelime)
    {
        puts(kelime);
        printf("Bir palindromdur\n");
    }
    else
    {
        puts(kelime);
        printf("Palindrom deðildir\n");
    }



    




    return 0;
}