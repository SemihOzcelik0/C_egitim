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

    printf("A��k kap�lar �unlard�r;\n");
    for(int i=0; i<10; i++)
    {
        if(sayilar[i])   // sayilar[kapi] yap�s� true false mant���yla �al��maktad�r e�er sayilar dizisinin i'nci eleman� 0 ise if �al��mayacak, 1 ise �al��acak.
        {
            printf("%d ", i+1);
        }
    }




    return 0;
}