#include <stdio.h>
#include <locale.h>

#define pi 3.14

int main()
{
    setlocale(LC_ALL,"Turkish");

    float kup_kenar, kup_alan, d_yaricap, kup_hacim, d_cevre, d_alan;

    printf("Dairenin yar��ap�n� giriniz..\n");
    scanf("%f", &d_yaricap);
    printf("K�p�n bir kenar�n�n uzunlu�unu giriniz..\n");
    scanf("%f", &kup_kenar);
    kup_hacim = kup_kenar * kup_kenar * kup_kenar;
    kup_alan = 6 * (kup_kenar * kup_kenar);
    d_cevre = 2 * pi * d_yaricap;
    d_alan = pi * d_yaricap * d_yaricap;
    printf("Dairenin �evresi: %f\nDairenin alan�: %f\nK�p�n hacmi : %f\nK�p�n alan� : %f", d_cevre, d_alan, kup_hacim, kup_alan);

    return 0;
}