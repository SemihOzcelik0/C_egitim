#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    char islem;

    printf("Bir i�lem se�iniz (+, -, *, /)");
    scanf("%c", &islem);

    switch (islem)
    {                                               
    case '+':
        printf("Toplama i�lemi...");
        break;
    case '-':
        printf("��karma i�lemi...");
        break;
    case '*':
        printf("�arpma i�lemi...");
        break;
    case '/':
        printf("B�lme i�lemi...");
        break;
    default:
        printf("Hatal� i�lem");
        break;
    }

    /* Switch-Case --> �f-Else �f- Else */
    
    if (islem == '+')
    {
        printf("Toplama i�lemi...");
    }
    else if(islem == '-')
    {
        printf("��karma i�lemi...");
    }
    else if(islem == '*')
    {
        printf("�arpma i�lemi...");
    }
    else if(islem == '/')
    {
        printf("B�lme i�lemi...");
    }
    else
    {
        printf("Hatal� i�lem");
    }
    

    return 0;
}