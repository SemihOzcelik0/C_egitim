#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int kutu, rastgeleSayi, i;

    srand(time(NULL));           //rand fonksiyonu rastgele bir say� �retir ancak 1 say� �retip s�rekli onu s�yler bu y�zden her seferinde s�f�rlanmas� gerekir.

    int loto[49] = {0};  
  
    for(i=0; i<6; i++)
    {                                // rand fonksiyonu derleyiciden derleyiciye de�i�iklikler g�stersede genel olarak 0 - 32767 aras�nda say�lar olu�turur.
    rastgeleSayi = 1 + rand()%49;   // S�f�rdan ka�a kadar say� �retmesini istiyorsak %x �eklinde ekleme yapmam�z gerekmektedir. Bu sayede �retti�i say�lar� b�l�p kalan�n� yazaca�� 
                                   // i�in girdi�imiz say�n�n �zerinde bir say� ��kmas� m�mk�n de�ildir. 1'den 49'a kadar de�er �rettirmek istedi�imiz i�in ba��na +1 ekliyoruz
    while(loto[rastgeleSayi]-1 == 1)
    {
        rastgeleSayi = 1+ rand()%49;
    }

    loto[rastgeleSayi-1] = 1;

    printf("%d ", rastgeleSayi);
    }
    printf("\n");

    for(i=0; i<49; i++)
    {
        printf("%d ", loto[i]);

    }



    return 0;
}