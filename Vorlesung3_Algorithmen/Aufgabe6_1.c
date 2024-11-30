#include <stdio.h>

int main()
{
    int test_array[] = { 5, 2, 7, 9, 1, 4, 3, 8, 6};
    int iArraySize = sizeof(test_array) / sizeof(int);
    int value = 0;

    for(int iCnt = 0; iCnt < iArraySize; iCnt++)
    {
        for(int iCnt2 = 0; iCnt2 < iArraySize; iCnt2++)
        {
            if(test_array[iCnt2] > test_array[iCnt])
            {
                value = test_array[iCnt];
                test_array[iCnt] = test_array[iCnt2];
                test_array[iCnt2] = value;
            }
        }
    }

    printf("\nSortierte Liste: \n");
    for(int i = 0; i < iArraySize; i++)
    {
        printf("%i  ", test_array[i]);
    }
}