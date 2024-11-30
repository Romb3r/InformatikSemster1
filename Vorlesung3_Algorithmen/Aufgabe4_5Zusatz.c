#include <stdio.h>
int main()
{
    char cBreakLetter = 0;
    char cLetter = 0;
    char cBLittleLetter = 0;
    int iAlphabetIndex = 0;
    printf("Gib ein Zeichen ein bei dem abgebrochen werden soll: ");
    scanf("%c", &cBreakLetter);
    while(getchar() != '\n');
    printf("Gib ein Grossbuchstaben ein: ");
    scanf("%c", &cLetter);
    while(getchar() != '\n');

    if (cLetter == cBreakLetter)
    {
        printf("Abbruch");
        return 0;
    }

    cBLittleLetter = cLetter + 32;
    printf("Kleinbuchstabe: %c", cBLittleLetter);
    for(int i = 65; i <= 90; i++)
    {
        if(cLetter == i)
        {
            printf("\nIndex im Alphabet: %i", iAlphabetIndex + 1);
        }
        iAlphabetIndex++;
    }
    
}