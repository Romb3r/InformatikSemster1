// Schreiben sie ein Programm, das den Nutzer zur Eingabe von 3 Zahlen auffordert.
// Die Zahlen sollen von Ihrem Programm anschließend in aufsteigender Größe ausgegeben werden.
// Gruppenübung 1

#include <stdio.h>


int main()
{
    int iNum1 = 0;
    int iNum2 = 0;
    int iNum3 = 0;
    printf("Gib eine Zahl ein: ");
    scanf("%i", &iNum1);

    printf("Gib eine zweite Zahl ein: ");
    scanf("%i", &iNum2);

    printf("Gib eine dritte Zahl ein: ");
    scanf("%i", &iNum3);

    printf("Eingabe: %i | %i | %i", iNum1, iNum2, iNum3);

    if(iNum1 < iNum2 && iNum1 < iNum3)
    {
        // if Num1 is smallest
        printf("\n%i", iNum1);
        if(iNum2 < iNum3)
        {
           printf("\n%i", iNum2); 
           printf("\n%i", iNum3);
        }
        else
        {
            printf("\n%i", iNum3);
            printf("\n%i", iNum2);
        }
    }

    else if((iNum1 < iNum2 && iNum1 > iNum3) || (iNum1 > iNum2 && iNum1 < iNum3))
    {
        // if Num1 is in middle
        if(iNum2 < iNum3)
        {
           printf("\n%i", iNum2); 
           printf("\n%i", iNum1);
           printf("\n%i", iNum3);
        }
        else
        {
            printf("\n%i", iNum3);
            printf("\n%i", iNum1);
            printf("\n%i", iNum2);
        }
    }
    else
    {
        // Num1 is biggest
        if(iNum2 < iNum3)
        {
            // Num2 is smaller Num3
            printf("\n%i", iNum2);
            printf("\n%i", iNum3);
        }
        else
        {
            printf("\n%i", iNum3);
            printf("\n%i", iNum2);
        }
        printf("\n%i", iNum1);
    }

    return 0;
}