#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");

    int kare_kenar, dd_uzun, dd_kisa, kare_alan, dd_alan;

    printf("Karenin bir kenar�n� giriniz..\n");
    scanf("%d", &kare_kenar);
    printf("Dikd�rtgenin �nce uzun kenar�n�, ard�ndan k�sa kenar�n� giriniz..\n");
    scanf("%d %d", &dd_uzun, &dd_kisa);

    kare_alan = kare_kenar * kare_kenar;
    dd_alan = dd_kisa * dd_uzun;
    printf("Karenin alan� : %d\nDikd�rtgenin alan� : %d", kare_alan, dd_alan);

    return 0;
}