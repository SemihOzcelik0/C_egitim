#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int i = 10;

    do{
        printf("%d", i);    // Do while döngüsünün özelliði þart saðlansada saðlanmasada 1 defa iþlemi yapýp sonrasýnda þarta göre iþlemi tekrarlamasýný saðlar.
    }while(i < 10);

    return 0;
}