#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int j,k;

    for(j=1; j<=10;j++)
    {
        for(k=1; k<10; k++)
        {
            printf("%d x %d = %d \t", j, k, j*k);
        }
        printf("\n");
    }

    return 0;
}