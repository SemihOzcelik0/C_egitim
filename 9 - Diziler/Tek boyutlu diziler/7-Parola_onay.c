#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int i, yanlis;
    char password[80], password2[80];

    while (1)
    {   
        yanlis =0;
        printf("L�tfen parolan�z� giriniz..\n");
        scanf("%s", password);
        printf("Parolan�z� tekrar giriniz..\n");
        scanf("%s", password2);
        
        for(i=0;!(password[i]=='\0' && password2[i]=='\0'); i++)
        {
            if(password[i]!=password2[i])
            {
                printf("�ifreler e�le�miyor !!!\n");
                yanlis = 1;
                break;
            }
        }

        if(yanlis==0){
            printf("Parolalar�n her ikiside e�le�ti..\nKayd�n�z tamamland�.\n");
            break;
        }
        
    }
    
    return 0;
}