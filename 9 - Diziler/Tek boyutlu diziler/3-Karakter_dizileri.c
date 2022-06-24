#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

int main()
{
    setlocale(LC_ALL,"Turkish");                    // EN DO�RUSU HER D�Z�YE ELEMAN SAYISINI G�RMEKT�R // 

    char isim[4] = "Cam";   // char tan�mlarken diziye karakter say�s�ndan 1 fazla eleman atan�r ��nk� dizinin sonland���n� otomatik olarak ramde \0 koyararak belirtir.
    // char isim[4] = {'C','a','m','\0'}; �eklinde eleman eleman olarakta tan�mlanabilir ancak b�yle tan�mlan�rsa her eleman t�rnak i�erisinde ve son eleman \0 olacak �ekilde

    for(int i=0; i<4; i++)
    {
        printf("Dizinin %d.eleman�: %c\n", i, isim[i]);    // isim adl� dizinin son karakter olarak \0'� otomatik olarak ekledi�ini d�ng�deki if sayesinde g�rd�k.
        if(isim[i]=='\0'){printf("Dizi tamamland�\n");}
    }

    int sayilar[] = {1,2,3,4,5};    
    for (int i=0; i<5; i++)             // E�er dizinin de�erleri k�me i�erisinde yaz�lm��sa eleman say�s�n�n belirtilmesi �art de�ildir.
    {printf("%d ", sayilar[i]);}

    char takimIsmi[] ="Bar�a";         // Eleman say�s�n�n belirtilmesi zorunlu de�ildir, kendi otomatik belirleyebilir.
    printf("%s\n", takimIsmi);        // Char de�i�keni karakter olarak kullan�lacaksa %c, direkt kelime olarak string �eklinde al�nacaksa %s ile kullan�l�r.

    char ulkeler[5];
    printf("L�tfen bir karakter dizisi giriniz..\n");
    scanf("%s", ulkeler);           //Karakter dizisi i�in scanf komutu kullan�l�rken ampersand(&) i�aretinin kullan�lmas� �art de�ildir, olmasa da do�ru �al���r.
    printf("%s\n", ulkeler);    // Belirlenen eleman say�s� farketmeksizin char de�i�kenlerine de�er atanabilir. Eleman say�s� 5 olarak belirtilmi� olsada girilecek
                             // karakterler i�in herhangi bir s�n�rlama yoktur, 5 eleman�n devam�na ekleme yapar.

    char city[8];                          
    for(int i=0; i<6; i++)                  
    {
        printf("Bir harf giriniz --> ");    // Girilecek harf say�s�ndan 1 fazla olacak �ekilde char de�i�keninin eleman say�s� belirlenmelidir.
        scanf(" %c", &city[i]);
    } 
    printf("%s", city);
    printf("XXXXXXXXXX");



    return 0;
}