#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int iDivider = 0;
    printf("Gib den Teiler ein: ");
    scanf("%i", &iDivider);

    for (int i = 0; i <= 100; i++)
    {
        if(i % iDivider == 0)
        {
            printf("%i\t", i);
        }
    }
}