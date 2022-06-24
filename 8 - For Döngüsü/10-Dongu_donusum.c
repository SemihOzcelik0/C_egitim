#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int sayi, likesayi, i=1;
    float oran;
    
    printf("Kaç tane sanatçý olduðunu giriniz : ");scanf("%d", &sayi);
    /*for(int i=1; i<= sayi; i++)
    {
        printf("%d. sanatçýnýn beðeni yüzdesini giriniz : ", i);scanf("%d", &likesayi);
        oran = likesayi*0.01;
        printf("%d. sanatçýnýn beðenilme oraný = %%%d\n", i, oran);

    }*/


    /*while(i<=sayi)
    {
        printf("%d. sanatçýnýn beðeni yüzdesini giriniz : ", i);scanf("%d", &likesayi);
        oran = likesayi*0.01;
        printf("%d. sanatçýnýn beðenilme oraný = %%%d\n", i, oran);
        i++;

    }*/


    do
    {
        printf("%d. sanatçýnýn beðeni yüzdesini giriniz : ", i);scanf("%d", &likesayi);
        oran = likesayi*0.01;
        printf("%d. sanatçýnýn beðenilme oraný = %%%d\n", i, oran);
        i++; 
    } while (i<=sayi);
    


    return 0;
}