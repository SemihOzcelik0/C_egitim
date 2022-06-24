#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int kutu, rastgeleSayi, i;

    srand(time(NULL));           //rand fonksiyonu rastgele bir sayý üretir ancak 1 sayý üretip sürekli onu söyler bu yüzden her seferinde sýfýrlanmasý gerekir.

    int loto[49] = {0};  
  
    for(i=0; i<6; i++)
    {                                // rand fonksiyonu derleyiciden derleyiciye deðiþiklikler göstersede genel olarak 0 - 32767 arasýnda sayýlar oluþturur.
    rastgeleSayi = 1 + rand()%49;   // Sýfýrdan kaça kadar sayý üretmesini istiyorsak %x þeklinde ekleme yapmamýz gerekmektedir. Bu sayede ürettiði sayýlarý bölüp kalanýný yazacaðý 
                                   // için girdiðimiz sayýnýn üzerinde bir sayý çýkmasý mümkün deðildir. 1'den 49'a kadar deðer ürettirmek istediðimiz için baþýna +1 ekliyoruz
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