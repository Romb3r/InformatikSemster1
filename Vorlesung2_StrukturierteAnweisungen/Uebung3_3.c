#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <assert.h>

int main()
{
    for(int x = 1; x <= 10; x++)
    {
        for(int y = 1; y <= 10; y++)
        {
            printf("%i\t", x * y);
        }
        printf("\n");
    }
    return 0;
}