#include "stdio.h"


int main(void)
{
    // C = (F - 32) / 1.8;
    int F = 27;
    float C;

    C = (F - 32) / 1.8;

    printf("%i Fahrenheit is %f Celsius\n", F, C);

    return 0;
}
