#include <stdio.h>

int clength(char *array)
{
    int boyut = 0;
    for (int i=0; array[i] != '\0'; i++)
    {boyut++;}
    return boyut;
}

int main()
{
    char isim[] = "Kaan Academy";
    printf("%d", clength(&isim));
    
    return 0;
}