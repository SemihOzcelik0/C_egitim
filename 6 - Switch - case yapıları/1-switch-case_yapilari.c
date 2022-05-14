#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");    // Switch se�im yapmay� sa�lar, case durumlara g�re gereken i�lemi yapar

    int secim;

    printf("L�tfen se�iminizi yap�n�z.\n");
    printf("1.�lkbahar\n2.Yaz\n3.Sonbahar\n4.K��\n");
    scanf("%d", &secim);

    switch(secim){                                       // "secim" de�i�keninden gelen veriye g�re se� 

        case 1: printf("Hava �ok g�zel"); break;        // "secim" de�i�kenindeki veriye g�re gereken durumun i�ine girer.
        case 2: printf("Hava �ok s�cak"); break;
        case 3: printf("Hava serin ve r�zgarl�"); break;    // break komutu yaz�lmazsa hangi case �al���rsa ard�ndan gelen b�t�n case'leri ve default'u yazar.
        case 4:
            printf("Hava �ok so�uk");                   // Alt alta bi�imde de yaz�labilir.
            break;
        default: printf("\"1,2,3,4\" rakamlar�ndan birini giriniz."); // default, else yap�s� gibi �al���r. Case yap�lar�ndaki durumlardan herhangi biri kar��lanmazsa default �al���r.

    }

    return 0;
}