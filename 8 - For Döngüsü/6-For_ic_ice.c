#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    for(int i=0; i<10; i++)
    {

        for(int j=0; j<10; j++)
        {
            printf("%d ", i);           // Ýç içe for döngüleri //
            printf("%d\n", j);
        }
    }

    int i, j;

    for(i=0, j=0; i<10 || j<10; i++, j++)
    {
        printf("%d %d ", i, j);              // 1 for döngüsünde birden çok iþlem //
    }

    return 0;
}