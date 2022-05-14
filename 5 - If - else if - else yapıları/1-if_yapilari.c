#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int puan;
    printf("L�tfen puan�n�z� giriniz..\n");
    scanf("%d", &puan);

    /* 
        5 > 4    <-->       5 >= 4  
        6 < 7    <-->       6 <= 7
        5 == 5    -->    5 e�it e�ittir 5                           
        5 != 6    -->    5 e�it de�ildir 6
    */
     if (puan >= 80 && puan <= 100){                        // Ve anlam�na gelen "&&" ile aral�k tan�mlanabilir.
        printf("�ok �yi Puan !!!");
    }   
    else if (puan >= 60 && puan <  80){                     // Yada anlam�na gelen "||" ile ayr� ayr� ko�ullar tan�mlanabilir
        printf("�yi Puan !!");
    }
    else if (puan >= 40 || puan <60){
        printf("Orta Puan !");
    }
    else if (puan >= 20){
        printf("K�t� Puan :/");
    }
    else if (puan >= 0){
        printf("�ok K�t� Puan :'(");
    }
    else {
        printf("L�tfen 0-100 aras�nda bir de�er giriniz..");
    }

    return 0;
}