#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int x = 10;
    for(int i = 1; i <= 10; i++)
    {
        printf("%i ", i);
    }

    printf("\n");

    while(x > 0)
    {
        printf("%i ", x);
        x--;
    }
}