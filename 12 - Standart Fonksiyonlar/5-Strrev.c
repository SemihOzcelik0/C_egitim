#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    char kelime[20];
    printf("Tersten yazd�rmak istedi�iniz kelimeyi giriniz..\n");gets(kelime);

    printf("%s\n", strrev(kelime)); //strrev kelimeyi tersten yazd�rmam�z� sa�layan fonksiyondur.

    // ```````````````````````````````````````````````````````````` Palindrom �rne�i ``````````````````````````````````````````````````````````````````````````````````````

    char kelime1[20];
    printf("Palindrom olup olmad���n� ��renmek istedi�iniz kelimeyi girin.\n");scanf("%s", kelime1);
    
    if(strcmp(kelime1, strrev(kelime1)) == 0)
    {
        printf("%s kelimesi bir palindromdur.\n", kelime1);
    }
    else
    {
        printf("%s Kelimesi bir palindrom de�ildir.\n");
    }

    return 0;
}