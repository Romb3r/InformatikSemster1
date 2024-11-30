#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <assert.h>

int main()
{
    uint8_t u8Num1 = 0;
    uint8_t u8Num2 = 0;
    printf("Gib 2 Zahlen ein: ");
    scanf("%u", &u8Num1);
    scanf("%u", &u8Num2);
    if(u8Num1 > u8Num2)
    {
        printf("%u", u8Num1);
    }
    else
    {
        printf("%u", u8Num2);
    }
    return 0;
}