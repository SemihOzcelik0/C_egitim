#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    for(int i=0; i<10; i++)
    {

        for(int j=0; j<10; j++)
        {
            printf("%d ", i);           // �� i�e for d�ng�leri //
            printf("%d\n", j);
        }
    }

    int i, j;

    for(i=0, j=0; i<10 || j<10; i++, j++)
    {
        printf("%d %d ", i, j);              // 1 for d�ng�s�nde birden �ok i�lem //
    }

    return 0;
}