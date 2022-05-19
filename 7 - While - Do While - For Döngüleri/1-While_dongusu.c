#include <stdio.h>
#include <locale.h>

int main()
{   
    setlocale(LC_ALL,"Turkish");    
    int i = 0;

    // 0 dýþýnda yazýlan her türlü sayýyý true olarak kabul eder, 0 yazýlýrsa false olarak kabul eder.

    while (i <= 10)         
    {
        printf("%d\n", i);
        i++;
    }
    
    return 0;
}