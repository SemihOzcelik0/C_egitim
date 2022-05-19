#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    char islem;

    printf("Bir iþlem seçiniz (+, -, *, /)");
    scanf("%c", &islem);

    switch (islem)
    {                                               
    case '+':
        printf("Toplama iþlemi...");
        break;
    case '-':
        printf("Çýkarma iþlemi...");
        break;
    case '*':
        printf("Çarpma iþlemi...");
        break;
    case '/':
        printf("Bölme iþlemi...");
        break;
    default:
        printf("Hatalý iþlem");
        break;
    }

    /* Switch-Case --> Ýf-Else Ýf- Else */
    
    if (islem == '+')
    {
        printf("Toplama iþlemi...");
    }
    else if(islem == '-')
    {
        printf("Çýkarma iþlemi...");
    }
    else if(islem == '*')
    {
        printf("Çarpma iþlemi...");
    }
    else if(islem == '/')
    {
        printf("Bölme iþlemi...");
    }
    else
    {
        printf("Hatalý iþlem");
    }
    

    return 0;
}