#include <stdio.h>
#include <locale.h>

void prime(int sayi)
{
    int asal=1;
    for(int i=2; i<sayi; i++)
    {
        asal = sayi%i;
        if(asal == 0)
        {printf("Girdi�iniz say� asal de�ildir..\n");break;}
    }
    if(asal!=0)
    {printf("Girdi�iniz say� bir asal say�d�r..\n");}
   
}

int main()
{
    setlocale(LC_ALL,"Turkish");
    int sayi;
    printf("Asal olup olmad���n� sorgulamak istedi�iniz say�y� giriniz..\n");scanf("%d", &sayi);
    prime(sayi);
    

    return 0;
}