#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    float a, x, b, c, sonuc;
    printf("\"f(x) = ax2 + bx + c\"\n");
    printf("x deðerini giriniz : ");
    scanf("%f", &x);
    printf("a deðerini giriniz : ");
    scanf("%f", &a);
    printf("b deðerini giriniz : ");
    scanf("%f", &b);
    printf("c deðerini giriniz : ");
    scanf("%f", &c);

    //printf("Sýrasýyla a, x, b, ve c deðerlerini giriniz");
    //scanf("%d %d %d %d", &a, &x, &b, &c);
    //printf("a deðeri : %d\nx deðeri : %d\nb deðeri : %d\nsabit terim : %d\n", a, x, b, c);

    sonuc = a*(x*x) + b*x + c; 
    printf("f(%d) = %d", (int)x, (int)sonuc);       // TYPE CASTÝNG ( Tip Dönüþümü )      Önem sýrasý = double > float > int  
                                                   // Eðer sonda görmek istediðimiz deðer aldýðýmýz deðiþkenden farklýysa veri tipini istediðimiz þekile dönüþtürüp "%f --> %d"
                                                  // çektiðimiz deðiþkenin baþýna parantez içerisinde dönüþmesini istediðimiz veri tipi yazýlýr.
    return 0;
}