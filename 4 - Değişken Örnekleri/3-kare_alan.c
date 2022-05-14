#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");

    int kare_kenar, dd_uzun, dd_kisa, kare_alan, dd_alan;

    printf("Karenin bir kenarýný giriniz..\n");
    scanf("%d", &kare_kenar);
    printf("Dikdörtgenin önce uzun kenarýný, ardýndan kýsa kenarýný giriniz..\n");
    scanf("%d %d", &dd_uzun, &dd_kisa);

    kare_alan = kare_kenar * kare_kenar;
    dd_alan = dd_kisa * dd_uzun;
    printf("Karenin alaný : %d\nDikdörtgenin alaný : %d", kare_alan, dd_alan);

    return 0;
}