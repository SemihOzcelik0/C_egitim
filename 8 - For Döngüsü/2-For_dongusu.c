#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Turkish");

    int i;

    for ( i = 0; i < 10; i++)
    {
        if (i %2 != 0)
        {
            printf("%d\n", i);          //break komutu d�ng�y� bozup do�rudan d��ar�ya ��kmas�n� sa�lar.
            break;
        }
        
    }

    for ( i = 0; i < 10; i++)
    {
        if (i %2 != 0)
        {
            printf("%d\n", i);          //continue komutu sonras�ndaki her �eyi atlay�p do�rudan d�ng�ye tekrar gelip �al��mas�n� sa�lar.
            continue;
        }

        printf("XXXXXXXXXXXXXX %d\n", i);      //Continue sayesinde bu b�l�me hi� gelemiyor. E�er if'e girmedi�i �artlar olursa bu sat�r �al���r.
        
    }
    

    return 0;
}