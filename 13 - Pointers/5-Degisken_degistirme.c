#include <stdio.h>

void degistir(int *sayi1, int *sayi2)
{
    int temp = *sayi1; // temporary (temp) geçici deðiþken anlamýnda kullanýlan isimlendirmedir.
    *sayi1 = *sayi2;
    *sayi2 = temp;
}

int main()
{
    int sayi1, sayi2;

    printf("Lutfen degistirmek istediginiz sayilari giriniz.\n1.Sayi: ");
    scanf("%d", &sayi1);printf("2.Sayi: ");scanf("%d", &sayi2);
    printf("\n\n");

    printf("Normal Hali\n1.sayi: %d\n2.sayi: %d\n\n", sayi1, sayi2);

    degistir(&sayi1, &sayi2);

    printf("Degistir Fonksiyonu\n1.sayi: %d\n2.sayi: %d\n", sayi1, sayi2);

    return 0;
}