#include <stdio.h>
#include <locale.h>

int main()
{   
    setlocale(LC_ALL,"Turkish");    
    int i = 0;

    // 0 d���nda yaz�lan her t�rl� say�y� true olarak kabul eder, 0 yaz�l�rsa false olarak kabul eder.

    while (i <= 10)         
    {
        printf("%d\n", i);
        i++;
    }
    
    return 0;
}