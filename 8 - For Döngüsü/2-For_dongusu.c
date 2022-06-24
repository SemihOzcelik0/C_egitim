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
            printf("%d\n", i);          //break komutu döngüyü bozup doðrudan dýþarýya çýkmasýný saðlar.
            break;
        }
        
    }

    for ( i = 0; i < 10; i++)
    {
        if (i %2 != 0)
        {
            printf("%d\n", i);          //continue komutu sonrasýndaki her þeyi atlayýp doðrudan döngüye tekrar gelip çalýþmasýný saðlar.
            continue;
        }

        printf("XXXXXXXXXXXXXX %d\n", i);      //Continue sayesinde bu bölüme hiç gelemiyor. Eðer if'e girmediði þartlar olursa bu satýr çalýþýr.
        
    }
    

    return 0;
}