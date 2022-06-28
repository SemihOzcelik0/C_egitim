#include <stdio.h>
#include <locale.h>

void ftoc(float fahrenayt)
{
    float celcius;
    celcius = (fahrenayt-32)/1.8;
    printf("%.2f °F = %.2f °C\n", fahrenayt, celcius);
}

void ctof(float celcius)
{
    float fahrenayt;
    fahrenayt = (celcius*1.8)+32;
    printf("%.2f °C = %.2f °F\n", celcius, fahrenayt);
}

int main()
{
    setlocale(LC_ALL,"Turkish");

    int secim;
    float derece;

    baslangic:
    printf("1- Celcius (°C) --> Fahrenayt(°F)\n2- Fahrenayt(°F) --> Celcius (°C)\n1 or 2 --> ");
    scanf("%d", &secim);
    if(secim == 1){
        printf("Kaç santigrat dereceyi fahrenayta dönüþtürmek istiyorsunuz ?\n");scanf("%f", &derece);
        ctof(derece);
    }
    else if(secim == 2)
    {
        printf("Kaç fahrenaytý santigrata dönüþtürmek istiyorsunuz ?\n");scanf("%f", &derece);
        ftoc(derece);
    }
    else{
        printf("\n  !!! Yanlýþ deðer girdiniz !!!\n\n");
        goto baslangic;
    }
    


    return 0;
}