#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <assert.h>

#define PI 3.14159

int main()
{
    float fRadius = 1.0f;
    float fUmfang = 0.0f;
    while(fRadius <= 10)
    {
        fUmfang = 2 * PI * fRadius;
        printf("\nUmfang für Radius %0.2f : %0.4f", fRadius, fUmfang);
        fRadius += 0.5f;
    }
    return 0;
}