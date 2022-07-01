#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    char meyve1[] = "Kiraz";
    char meyve2[] = "Muz";

        strcmp(meyve1, meyve2);
    /*    ^``````````
        strcmp fonksiyonu dizileri karþýlaþtýrmayý saðlar.
        Girilen iki dizi birbirine eþitse return 0; çalýþýr ve 0 deðerini verir. --> meyve1 == meyve2 --> "0"
        Girilen iki diziden ilk girilen ikinciden alfabetik olarak daha önceyse onu büyük kabul eder ve sýfýrdan küçük bir deðer döndürür. --> meyve1 > meyve2 --> "<0"
        Girilen iki diziden ilk girilen ikinciden alfabetik olarak daha sonraysa onu küçük kabul eder ve sýfýrdan büyük bir deðer döndürür. --> meyve1 < meyve2 --> ">0"
    */

    if(strcmp(meyve1, meyve2) == 0){printf("Girdiðiniz iki kelime birbirine eþittir.\n");}
    else if(strcmp(meyve1, meyve2) > 0){printf("Girdiðiniz iki kelimeden %s kelimesi %s kelimesinden alfabetik olarak daha büyüktür.\n", meyve2, meyve1);}
    else{printf("Girdiðiniz iki kelimeden %s kelimesi %s kelimesinden alfabetik olarak daha büyüktür.\n", meyve1, meyve2);}

    // ```````````````````````````````````````````````````````````` Kullanýcý adý ve Þifre Örneði ``````````````````````````````````````````````````````````````````````````````````````

    char kullanciAdi[15] = "admin", sifre[15] = "sifre123"; 
    char kullanciAdiGir[15], sifreGir[15];
    
    printf("Kullanýcý adý: ");scanf("%s", kullanciAdiGir);
    printf("Þifre: ");scanf("%s", sifreGir);

    if(strcmp(kullanciAdi, kullanciAdiGir)==0 && strcmp(sifre, sifreGir)==0)
    {
        printf("Giriþ bilgileriniz eþleþti\nGiriþ yapýlýyor...\n");
    }
    else
    {
        printf("Hatalý giriþ yaptýnýz !\n");
    }
    
    return 0;
}