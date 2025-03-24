#include "stdio.h"


int main(void)
{
    float x = 2.55;
    float result;
    
    result = 3 * (x * x * x) - 5 * (x * x) - 6;

    printf("Result is %f\n", result);

    return 0;
}
