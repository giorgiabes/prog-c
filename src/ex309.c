#include "stdio.h"

int main(void)
{
    int i, j, result;
    i = 365;
    j = 7;
    result = i + j - i % j;
    printf("Result is: %i\n", result);
}
