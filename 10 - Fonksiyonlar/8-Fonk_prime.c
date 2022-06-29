#include <stdio.h>
#include <locale.h>

void prime(int sayi)
{
    int asal=1;
    for(int i=2; i<sayi; i++)
    {
        asal = sayi%i;
        if(asal == 0)
        {printf("Girdiðiniz sayý asal deðildir..\n");break;}
    }
    if(asal!=0)
    {printf("Girdiðiniz sayý bir asal sayýdýr..\n");}
   
}

int main()
{
    setlocale(LC_ALL,"Turkish");
    int sayi;
    printf("Asal olup olmadýðýný sorgulamak istediðiniz sayýyý giriniz..\n");scanf("%d", &sayi);
    prime(sayi);
    

    return 0;
}