#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    float a, x, b, c, sonuc;
    printf("\"f(x) = ax2 + bx + c\"\n");
    printf("x de�erini giriniz : ");
    scanf("%f", &x);
    printf("a de�erini giriniz : ");
    scanf("%f", &a);
    printf("b de�erini giriniz : ");
    scanf("%f", &b);
    printf("c de�erini giriniz : ");
    scanf("%f", &c);

    //printf("S�ras�yla a, x, b, ve c de�erlerini giriniz");
    //scanf("%d %d %d %d", &a, &x, &b, &c);
    //printf("a de�eri : %d\nx de�eri : %d\nb de�eri : %d\nsabit terim : %d\n", a, x, b, c);

    sonuc = a*(x*x) + b*x + c; 
    printf("f(%d) = %d", (int)x, (int)sonuc);       // TYPE CAST�NG ( Tip D�n���m� )      �nem s�ras� = double > float > int  
                                                   // E�er sonda g�rmek istedi�imiz de�er ald���m�z de�i�kenden farkl�ysa veri tipini istedi�imiz �ekile d�n��t�r�p "%f --> %d"
                                                  // �ekti�imiz de�i�kenin ba��na parantez i�erisinde d�n��mesini istedi�imiz veri tipi yaz�l�r.
    return 0;
}