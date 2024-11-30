#include <stdio.h>

int main()
{
    double pi = 3.141592;
    printf("\nPI = %f\n", pi);

    printf("\nPI = %.2f", pi);
    printf("\nPI = %10.2f", pi);
    printf("\nPI = %+10.2f", pi);
    printf("\nPI = %+010.2f", pi);
    printf("\nPI = %-10.2f", pi);
    printf("\nPI = %-+10.2f", pi);
}