//Gruppenübung 7

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <assert.h>

int main()
{
    char cOperator;
    float fNum1 = 0;
    float fNum2 = 0;
    float fResult = 0;
    while(true)
    {
        printf("\nWas möchtest du Rechnen? ");
        scanf_s("%f %c %f", &fNum1, &cOperator, 1, &fNum2);
        getchar();

        switch (cOperator)
        {
            case '+':
                fResult = fNum1 + fNum2;
                break;
            
            case '-':
                fResult = fNum1 - fNum2;
                break;

            case '*':
                fResult = fNum1 * fNum2;
                break;

            case '/':
            case ':':
                assert(fNum2 != 0);
                fResult = fNum1 / fNum2;
                break;

            default:
                printf("Ungültige Rechenoperation");
                break;
        }
        printf("\nErgebnis von %.2f %c %0.2f = %0.2f", fNum1, cOperator, fNum2, fResult);
    }
    return 0;
}