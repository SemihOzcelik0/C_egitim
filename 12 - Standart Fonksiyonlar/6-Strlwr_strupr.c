#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    char kelime[20]; //strlwr fonksiyonu girilen kelimenin t�m harflerinin k���k, strupr fonksiyonu ise t�m harflerin b�y�k yaz�lmas�n� sa�lar.                    
    
    printf("Bir kelime giriniz\n");scanf("%s",kelime);

    printf("Girdi�iniz kelimenin k���k harflerle yaz�lm�� hali: %s\n", strlwr(kelime));
    printf("Girdi�iniz kelimenin b�y�k harflerle yaz�lm�� hali: %s\n", strupr(kelime));


    return 0;
}
