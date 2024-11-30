// Gruppenübung 2

#include <stdio.h>

int main()
{
    char cLetter;
    int iNum = 0;
    printf("Gib einen Buchstaben ein: ");
    scanf("%c", &cLetter);
    while(getchar() != '\n');

    switch (cLetter)
    {
        case 'e':
        case 'E':
            iNum = 1;
            break;

        case 'z':
        case 'Z':
            iNum = 2;
            break;

        case 'd':
        case 'D':
            iNum = 3;
            break;

        case 'v':
        case 'V':
            iNum = 4;
            break;

        case 'f':
        case 'F':
            iNum = 5;
            break;

        case 's':
        case 'S':
            iNum = 6;
            break;

        case 'n':
        case 'N':
            iNum = 7;
            break;

        case 'a':
        case 'A':
            iNum = 8;
            break;

        case 'u':
        case 'U':
            iNum = 9;
            break;

        case '1':
            iNum = 0;
            break;
        
        default:
            printf("Falscher Buchstabe");
            return 0;
            break;
    }

    printf("Zu Buchstabe %c gehört die Ziffer %i", cLetter, iNum);
    return 0;
}