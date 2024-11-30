#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <assert.h>

int main()
{
    uint8_t u8Number = 0;
    while(true)
    {
        printf("\nGib eine Zahl ein um alle Teiler zu finden: ");
        scanf("%u", &u8Number);

        printf("\nTeiler von %u", u8Number);
        for (uint8_t u8Cnt = 1; u8Cnt <= u8Number; u8Cnt++)
        {
            if(u8Number % u8Cnt == 0)
            {
                printf("\n%u", u8Cnt);
            }
        }
    }
    return 0;
}