#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int i;

    for(i = 0; i < 10; i++)          // �lk olarak ram'de de�eri atanmayan i de�i�kenine 0 de�eri atan�r ve birdaha d�ng� asla i ye 0 atamas�n� yapmaz. �lk �al��mada i'nin de�eri
    {                               // atand�ktan sonra sonra �art�n sa�lan�p sa�lanmad���n� kontrol eder e�er sa�lan�yorsa d�ng�ye girer ve d�ng�y� tamamlar. For'un i�ine tekrar
                                   //  girer ve ilk olarak son i�lemi yani i'yi 1 art�rmay� yapar, ard�ndan �art�n sa�lan�p sa�lanmad���n� kontrol eder ve d�ng�y� b�yle s�rd�r�r.

            printf("Standart for d�ng�s� - %d\n", i);
        
    }

    for (int a = 1; a < 10 && a > 1; a=a+2)    // De�i�ken for d���nda tan�mlanabildi�i gibi i�inde de tan�mlanabilir. 
    {                                         // Son b�l�mdeki i�lem i++ olmak zorunda de�ildir herhangi bir i�lem tan�mlanabilir. 
    
        printf("��erde tan�ml� ve tek say�lar� yazan for d�ng�s� - %d\n",a);

    }

    int e = 2;

    for(; e < 10; e++)               // De�i�kenin de�eri for d���nda atanabilir ancak d�ng� komutlar�n yerini bilebilsin diye atama d��arda yap�lm�� olsada normalde 
    {                               // de�i�kenin de�erinin atand��� b�l�m� bo� b�rak�p bir noktal� virg�l (;) koymak gerekir.

        printf("D��arda De�er atanm�� for d�ng�s� - %d\n", e);    

    }
    
    for (int b = 100; b > 18; b--)
    {       
        printf("��karma i�lemi yapan for d�ng�s� - %d\n", b);
    }

    int biletSayisi = 100;

    for (; biletSayisi > 0; biletSayisi--)
    {
    }                                        // D�ng�n�n i�ini bo� b�rak�p i�lemi orda tamamlad�ktan sonra ��kt� olarak almakta m�mk�n.
    
    printf("%d\n", biletSayisi);
    
    for (int f = 100; f > 0; f--)           // �RNEK //
    {   
        if(f %2 == 0)
        {
            printf("%d\n", f);
        }
    }

    return 0;    
}   

