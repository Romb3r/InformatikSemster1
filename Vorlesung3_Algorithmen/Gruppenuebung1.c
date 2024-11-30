#include <stdio.h>
#include <math.h>

int main()
{
    int iNumber = 0;
    int iResult = 0;

    printf("Gib eine Zahl ein: ");
    scanf("%i", &iNumber);

    int iSize = floor(log10(abs(iNumber))) + 1;
    while (iSize > 0)
    {
        iResult += iNumber % 10;
        iNumber = iNumber / 10;
        iSize--;
    }

    printf("Result: %i", iResult);
    
}