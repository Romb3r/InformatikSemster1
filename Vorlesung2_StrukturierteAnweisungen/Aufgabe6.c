//Gruppenübung 6

#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t u8Num = 0;
    printf("Gib eine Zahl ein: ");
    scanf("%u", &u8Num);

    if(u8Num % 2 == 0)
    {
        u8Num = u8Num / 2;
    }

    else
    {
        u8Num = (u8Num * 3) + 1;
    }

    printf("%u", u8Num);
    return 0;
}