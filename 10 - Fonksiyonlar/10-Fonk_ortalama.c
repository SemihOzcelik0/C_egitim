#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void notSistemi(int ortalama)
{
    if(ortalama > 100){printf("Ortalama 100 puanýn üzerinde. Puanlarý Doðru girdiðinize emin olun.\n");}
    else if(ortalama < 0){printf("Ortalama 0'ýn altýnda. Puanlarý Doðru girdiðinize emin olun.\n");}
    else if(ortalama >= 90){printf("Dörtlük sistemde notunuz: 4");}
    else if(ortalama >= 80){printf("Dörtlük sistemde notunuz: 3");}
    else if(ortalama >= 70){printf("Dörtlük sistemde notunuz: 2");}
    else if(ortalama >= 60){printf("Dörtlük sistemde notunuz: 1");}
    else{printf("Dörtlük sistemde notunuz: 0");}
    
}

int main()
{
    setlocale(LC_ALL,"Turkish");
    srand(time(NULL));

    int ogrenciSayisi, dersSayisi, puan, toplamPuan, ortalama;
    
    printf("Kaç öðrencinin ortalamasýný hesaplamak istiyorsunuz?\n");scanf("%d", &ogrenciSayisi);
    printf("Kaç dersin ortalamasý alýnacak ?\n");scanf("%d", &dersSayisi);
    char ogrenciler[ogrenciSayisi][30];
    int notlar[ogrenciSayisi][dersSayisi][1]; // En sondaki 1 elemanlý dizi her dersi için 1 not alacaðýndan dolayý oluþturuldu.

    for(int i=0; i<ogrenciSayisi; i++)
    {
        printf("\n%d. öðrencinin adýný giriniz : ",i+1);scanf("%s", &ogrenciler[i]);printf("\n");
        for(int j=0; j<dersSayisi; j++)
        {
            puan = rand()%101;
            notlar[i][j][0] = puan;
            printf("%s isimli öðrencinin %d. dersinin puaný: %d\n", ogrenciler[i], j+1, notlar[i][j][0]);
        }
    }
    
    for(int i=0; i<ogrenciSayisi; i++)
    {
        toplamPuan = 0;
        for(int j=0; j<dersSayisi; j++)
        {
            toplamPuan += notlar[i][j][0];
        }
        printf("\n%s isimli öðrencinin not ortalamasý: %d\n", ogrenciler[i], toplamPuan/dersSayisi);
        notSistemi(toplamPuan/dersSayisi);
        printf("\n");
    }
    



    
    return 0;
}