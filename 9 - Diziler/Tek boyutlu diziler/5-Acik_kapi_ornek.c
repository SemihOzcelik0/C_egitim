#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int tur, kapi;

    int sayilar[10] = {0};
    for(tur=0; tur<10; tur++)
    {
        for(kapi = tur; kapi<10; kapi+= tur+1)
        {
            sayilar[kapi] = !sayilar[kapi];
            printf("%d", sayilar[kapi]);
            
        }
        printf("\n");

    }

    printf("Açýk kapýlar þunlardýr;\n");
    for(int i=0; i<10; i++)
    {
        if(sayilar[i])   // sayilar[kapi] yapýsý true false mantýðýyla çalýþmaktadýr eðer sayilar dizisinin i'nci elemaný 0 ise if çalýþmayacak, 1 ise çalýþacak.
        {
            printf("%d ", i+1);
        }
    }




    return 0;
}