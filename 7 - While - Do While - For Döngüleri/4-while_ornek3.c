#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int sayi1, sayi2, toplam;
    
    printf("Aralar�ndaki terimlerin toplam�n�n ka� oldu�unu ��renmek istedi�iniz iki say� giriniz\n");
    scanf("%d %d", &sayi1, &sayi2);

    int ilkSayi = sayi1;
    int sonSayi = sayi2;
    if(sayi1 == sayi2)
    {
        toplam = sayi1;
    }

    else if (sayi1 < sayi2)
    {
        toplam = sayi1;

        while (sayi1 < sayi2)
        {   
        sayi1++;
        toplam = toplam + sayi1;
        }
    }

    else if(sayi2 < sayi1)
    {
        toplam = sayi2;

        while (sayi2 < sayi1)
        {
            sayi2++;
            toplam = toplam + sayi2;
        }
    }
    
    printf("%d ile %d aras�ndaki say�lar�n toplam�: %d", ilkSayi, sonSayi, toplam);
    return 0;
}