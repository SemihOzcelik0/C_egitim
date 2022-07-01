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
        strcmp fonksiyonu dizileri kar��la�t�rmay� sa�lar.
        Girilen iki dizi birbirine e�itse return 0; �al���r ve 0 de�erini verir. --> meyve1 == meyve2 --> "0"
        Girilen iki diziden ilk girilen ikinciden alfabetik olarak daha �nceyse onu b�y�k kabul eder ve s�f�rdan k���k bir de�er d�nd�r�r. --> meyve1 > meyve2 --> "<0"
        Girilen iki diziden ilk girilen ikinciden alfabetik olarak daha sonraysa onu k���k kabul eder ve s�f�rdan b�y�k bir de�er d�nd�r�r. --> meyve1 < meyve2 --> ">0"
    */

    if(strcmp(meyve1, meyve2) == 0){printf("Girdi�iniz iki kelime birbirine e�ittir.\n");}
    else if(strcmp(meyve1, meyve2) > 0){printf("Girdi�iniz iki kelimeden %s kelimesi %s kelimesinden alfabetik olarak daha b�y�kt�r.\n", meyve2, meyve1);}
    else{printf("Girdi�iniz iki kelimeden %s kelimesi %s kelimesinden alfabetik olarak daha b�y�kt�r.\n", meyve1, meyve2);}

    // ```````````````````````````````````````````````````````````` Kullan�c� ad� ve �ifre �rne�i ``````````````````````````````````````````````````````````````````````````````````````

    char kullanciAdi[15] = "admin", sifre[15] = "sifre123"; 
    char kullanciAdiGir[15], sifreGir[15];
    
    printf("Kullan�c� ad�: ");scanf("%s", kullanciAdiGir);
    printf("�ifre: ");scanf("%s", sifreGir);

    if(strcmp(kullanciAdi, kullanciAdiGir)==0 && strcmp(sifre, sifreGir)==0)
    {
        printf("Giri� bilgileriniz e�le�ti\nGiri� yap�l�yor...\n");
    }
    else
    {
        printf("Hatal� giri� yapt�n�z !\n");
    }
    
    return 0;
}