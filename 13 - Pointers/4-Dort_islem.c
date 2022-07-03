#include <stdio.h>

float topla(float *a, float *b)
{
    return *a + *b;
}

float cikar(float *c, float *d)
{
    return *c - *d;
}    

float carp(float *e, float *f)
{
    return *e * *f;
}

float bol(float *g, float *h)
{
    return *g / *h;
}

int main()
{
    float sayi1, sayi2;

    printf("Lutfen 2 adet sayi giriniz..\n");
    scanf("%f %f", &sayi1, &sayi2);

    printf("%.2f\n", topla(&sayi1, &sayi2));
    printf("%.2f\n", cikar(&sayi1, &sayi2));
    printf("%.2f\n", carp(&sayi1, &sayi2));
    printf("%.2f\n", bol(&sayi1, &sayi2));


    return 0;
}