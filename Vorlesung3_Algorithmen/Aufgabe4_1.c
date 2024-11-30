#include <stdio.h>
#include <math.h>

#define PI 3.14

int main()
{
    float fFlaeche = 0;

    for(float fRadius = 0; fRadius <= 10; fRadius += 0.5)
    {
        fFlaeche = PI * pow(fRadius, 2);
        printf("\n%0.2f", fFlaeche);
    }
}