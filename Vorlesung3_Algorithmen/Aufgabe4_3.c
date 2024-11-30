#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    bool boStopInput = false;
    char cStopInput;
    int iNumCount = 1;
    int iNumInput = 0;
    int iAddAll = 0;
    while (!boStopInput)
    {
        printf("\nGeben Sie die %i. Zahl ein: ", iNumCount);
        scanf("%i", &iNumInput);
        while(getchar() != '\n');

        iAddAll += iNumInput;

        printf("\nWeitere Zahl? [J/N]");
        scanf("%c", &cStopInput);
        while(getchar() != '\n');

        if(cStopInput == 'N' || cStopInput == 'n')
        {
            boStopInput = true;
            break;
        }
        iNumCount++;
    }
    printf("\nMittelwert der eingegebenen Zahlen: %i", iAddAll / iNumCount);
}