#include <stdio.h>
#include "bibs.h"

int main()
{
    int i32Zahl1 = 0;
    double dZahl2 = 5.238912;
    scanf_s("%i", &i32Zahl1);
    printf("Zahl 1: %i    Zahl2: %0.2f", i32Zahl1, dZahl2);
    return 0;
}