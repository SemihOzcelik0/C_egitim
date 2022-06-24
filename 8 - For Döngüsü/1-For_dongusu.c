#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int i;

    for(i = 0; i < 10; i++)          // Ýlk olarak ram'de deðeri atanmayan i deðiþkenine 0 deðeri atanýr ve birdaha döngü asla i ye 0 atamasýný yapmaz. Ýlk çalýþmada i'nin deðeri
    {                               // atandýktan sonra sonra þartýn saðlanýp saðlanmadýðýný kontrol eder eðer saðlanýyorsa döngüye girer ve döngüyü tamamlar. For'un içine tekrar
                                   //  girer ve ilk olarak son iþlemi yani i'yi 1 artýrmayý yapar, ardýndan þartýn saðlanýp saðlanmadýðýný kontrol eder ve döngüyü böyle sürdürür.

            printf("Standart for döngüsü - %d\n", i);
        
    }

    for (int a = 1; a < 10 && a > 1; a=a+2)    // Deðiþken for dýþýnda tanýmlanabildiði gibi içinde de tanýmlanabilir. 
    {                                         // Son bölümdeki iþlem i++ olmak zorunda deðildir herhangi bir iþlem tanýmlanabilir. 
    
        printf("Ýçerde tanýmlý ve tek sayýlarý yazan for döngüsü - %d\n",a);

    }

    int e = 2;

    for(; e < 10; e++)               // Deðiþkenin deðeri for dýþýnda atanabilir ancak döngü komutlarýn yerini bilebilsin diye atama dýþarda yapýlmýþ olsada normalde 
    {                               // deðiþkenin deðerinin atandýðý bölümü boþ býrakýp bir noktalý virgül (;) koymak gerekir.

        printf("Dýþarda Deðer atanmýþ for döngüsü - %d\n", e);    

    }
    
    for (int b = 100; b > 18; b--)
    {       
        printf("Çýkarma iþlemi yapan for döngüsü - %d\n", b);
    }

    int biletSayisi = 100;

    for (; biletSayisi > 0; biletSayisi--)
    {
    }                                        // Döngünün içini boþ býrakýp iþlemi orda tamamladýktan sonra çýktý olarak almakta mümkün.
    
    printf("%d\n", biletSayisi);
    
    for (int f = 100; f > 0; f--)           // ÖRNEK //
    {   
        if(f %2 == 0)
        {
            printf("%d\n", f);
        }
    }

    return 0;    
}   

