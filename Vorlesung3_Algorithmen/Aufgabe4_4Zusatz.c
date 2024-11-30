#include <stdio.h>
int main()
{
    int zeile, spalte;
    for(zeile = 1; zeile <= 20; zeile++)
    {
        for(spalte = 20; spalte > zeile; spalte--)
        {
            printf("*");
        }
        printf("\n");
    }
}