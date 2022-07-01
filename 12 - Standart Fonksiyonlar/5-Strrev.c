#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    char kelime[20];
    printf("Tersten yazdýrmak istediðiniz kelimeyi giriniz..\n");gets(kelime);

    printf("%s\n", strrev(kelime)); //strrev kelimeyi tersten yazdýrmamýzý saðlayan fonksiyondur.

    // ```````````````````````````````````````````````````````````` Palindrom Örneði ``````````````````````````````````````````````````````````````````````````````````````

    char kelime1[20];
    printf("Palindrom olup olmadýðýný öðrenmek istediðiniz kelimeyi girin.\n");scanf("%s", kelime1);
    
    if(strcmp(kelime1, strrev(kelime1)) == 0)
    {
        printf("%s kelimesi bir palindromdur.\n", kelime1);
    }
    else
    {
        printf("%s Kelimesi bir palindrom deðildir.\n");
    }

    return 0;
}