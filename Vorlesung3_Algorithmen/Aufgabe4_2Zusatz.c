#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    char cLetter = 90;
    do
    {
        for(int i = 0; i <= 7; i++)
        {
            if(cLetter == 65 || cLetter == 69 || cLetter == 73 || cLetter == 79 || cLetter == 85)
            {
                printf("*\t");
            }
            else
            {
                printf("%c\t", cLetter);
            }
            cLetter--;
            if(cLetter < 65)
            {
                return 0;
            }
        }
        printf("\n");
    } while (cLetter >= 65);
}