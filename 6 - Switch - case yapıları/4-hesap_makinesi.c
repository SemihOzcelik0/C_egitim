#include <stdio.h>
#include <locale.h>
#include <math.h>
// Otomatik olarak tanýmlý gelen bir kütüphanedir ama yinede dahil etmekte fayda var. Toplama çýkarma gibi iþlemler için gerekmesede karekök, üs alma vs. iþlemler için gereklidir.

int main()
{
    setlocale(LC_ALL,"Turkish");

    int islem;
    float sayi1, sayi2;

    menu:
    printf("Lütfen yapmak istediðiniz iþlemi seçiniz\n");
    printf("1.Toplama     2.Çýkarma     3.Çarpma     4.Bölme     5.Karekök Alma     6.Kuvvetini Alma\n");
    printf("Çýkmak için \"-1\" deðerini giriniz.\n--> ");
    scanf("%d", &islem);

    if (islem == -1)
    {
        goto cikis;
    }
    
    if (islem <=6 && islem >= 1)
    {
        printf("Lütfen iþlem yapmak istediðiniz iki sayýyý sýrayla giriniz\n--> ");
        scanf("%f", &sayi1);
        printf("--> ");
        scanf("%f", &sayi2);
    }
    
    switch (islem)
    {
    case 1:
        printf("Toplama iþleminin sonucu: %.2f\n", sayi1 + sayi2);
        break;
    case 2:
        printf("Çýkarma iþleminin sonucu: %.2f\n", sayi1 - sayi2);
        break;
    case 3:
        printf("Çarpma iþleminin sonucu: %.2f\n", sayi1 * sayi2);
        break;
    case 4:
        printf("Bölme iþleminin sonucu: %.2f\n", sayi1 / sayi2);
        break;
    case 5:                                                                         // Sayýnýn karekökünü veya üssü hesaplanýrken c dilinde oluþturulmuþ "math.h" kütüphanesinden yararlanýlýr.
        printf("%.2f Sayýsýnýn Karekökü = %.2f\n%.2f Sayýsýnýn Karekökü = %.2f\n", sayi1, sqrt(sayi1), sayi2, sqrt(sayi2)); // sqrt() fonksiyonunun içine yazýlan sayýnýn karekökünü bize yazar.
        break;
    case 6:                                                 // Bir sayý üzeri bir sayýyý hesaplamak için "pow" yani power(kuvvet) fonksiyonu kullanýlýr. Önce taban sonra üs þeklinde girilir.
        printf("%.2f üzeri %.2f = %.2f\n", sayi1, sayi2,pow(sayi1,sayi2));  
        break;
    default:
        printf("Lütfen 1 ile 6 arasýnda bir sayý giriniz\n");
        break;
    }

    printf("- - - - - - - - - - - - - - - - - - - -\n");
    goto menu;
    cikis: printf("Program Sonlandý...");
    return 0;
}