#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int i = 10;

    do{
        printf("%d", i);    // Do while d�ng�s�n�n �zelli�i �art sa�lansada sa�lanmasada 1 defa i�lemi yap�p sonras�nda �arta g�re i�lemi tekrarlamas�n� sa�lar.
    }while(i < 10);

    return 0;
}