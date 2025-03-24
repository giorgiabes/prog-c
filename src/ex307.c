#include "stdio.h"


int main(void)
{
    double numerator = (3.31e-8 * 2.01e-7);
    double denominator = (7.16e-6 * 2.01e-8);
    double result = numerator / denominator;

    printf("Result is: %e\n", result);

    return 0;
}
