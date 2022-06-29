#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void notSistemi(int ortalama)
{
    if(ortalama > 100){printf("Ortalama 100 puan�n �zerinde. Puanlar� Do�ru girdi�inize emin olun.\n");}
    else if(ortalama < 0){printf("Ortalama 0'�n alt�nda. Puanlar� Do�ru girdi�inize emin olun.\n");}
    else if(ortalama >= 90){printf("D�rtl�k sistemde notunuz: 4");}
    else if(ortalama >= 80){printf("D�rtl�k sistemde notunuz: 3");}
    else if(ortalama >= 70){printf("D�rtl�k sistemde notunuz: 2");}
    else if(ortalama >= 60){printf("D�rtl�k sistemde notunuz: 1");}
    else{printf("D�rtl�k sistemde notunuz: 0");}
    
}

int main()
{
    setlocale(LC_ALL,"Turkish");
    srand(time(NULL));

    int ogrenciSayisi, dersSayisi, puan, toplamPuan, ortalama;
    
    printf("Ka� ��rencinin ortalamas�n� hesaplamak istiyorsunuz?\n");scanf("%d", &ogrenciSayisi);
    printf("Ka� dersin ortalamas� al�nacak ?\n");scanf("%d", &dersSayisi);
    char ogrenciler[ogrenciSayisi][30];
    int notlar[ogrenciSayisi][dersSayisi][1]; // En sondaki 1 elemanl� dizi her dersi i�in 1 not alaca��ndan dolay� olu�turuldu.

    for(int i=0; i<ogrenciSayisi; i++)
    {
        printf("\n%d. ��rencinin ad�n� giriniz : ",i+1);scanf("%s", &ogrenciler[i]);printf("\n");
        for(int j=0; j<dersSayisi; j++)
        {
            puan = rand()%101;
            notlar[i][j][0] = puan;
            printf("%s isimli ��rencinin %d. dersinin puan�: %d\n", ogrenciler[i], j+1, notlar[i][j][0]);
        }
    }
    
    for(int i=0; i<ogrenciSayisi; i++)
    {
        toplamPuan = 0;
        for(int j=0; j<dersSayisi; j++)
        {
            toplamPuan += notlar[i][j][0];
        }
        printf("\n%s isimli ��rencinin not ortalamas�: %d\n", ogrenciler[i], toplamPuan/dersSayisi);
        notSistemi(toplamPuan/dersSayisi);
        printf("\n");
    }
    



    
    return 0;
}