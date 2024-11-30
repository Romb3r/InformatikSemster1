//Gruppenübung 4
#include <stdio.h>

int main()
{
    float fZähler;
    float fNenner;
    float fResult;
    int i;

    for(i = 0; i <= 2; i++)
    {
        printf("\nGeben den Zähler ein: ");
        scanf("%f", &fZähler);
        if(fZähler == 0)
        {
            printf("Ergebnis: 0");
            continue;
        }

        printf("Geben den Nenner ein: ");
        scanf("%f", &fNenner);
        if(fNenner == 0)
        {
            printf("Teilen durch 0 nicht erlaubt!");
            break;
        }

        fResult = fZähler / fNenner;
        printf("%.2f : %.2f = %.0f", fZähler, fNenner, fResult);
    }
    return 0;
}