#include <stdio.h>

int main()
{
    char bs1, bs2, bs3;

    printf("\nBitte 1 Zeichen eingeben: ");
    scanf_s("%c", &bs1, 1);

    while(getchar() != '\n');       // Input Buffer löschen

    printf("\nJetzt noch ein Zeichen: ");
    scanf_s("%c", &bs2, 1);

    printf("\nErstes Zeichen: %c", bs1);
    printf("\nZweites Zeichen: %c", bs2);
    return 0;
}