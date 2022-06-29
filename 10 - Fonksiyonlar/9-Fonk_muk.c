#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void mukemmel(int sayi)
{
    int muk=0;
    for(int i=1; i<sayi; i++)
    {
        if(sayi % i == 0)
        {
            muk += i;
        }
    }
    if(muk == sayi){printf("%d sayýsý bir mükemmel sayýdýr.\n", muk);}
}

int main()
{
    setlocale(LC_ALL,"Turkish");
    int sayi;

    printf("Hangi sayýya kadar olan mükemmel sayýlarý görüntülemek istiyorsunuz ?\n");scanf("%d", &sayi);

    for(int i=0; i<=sayi; i++)
    {mukemmel(i);}

    return 0;
}