#include "stdio.h"


int main(void) {
    int a = 25;
    int b = 2;
    float c = 25.0;
    float d = 2.0;

    /* Using integer arithmetics */
    printf("6 + a / 5 * b = %i\n", 6 + a / 5 * b);
    printf("a / b * b = %i\n", a / b * b);

    /* Using floating-point arithmetics */
    printf("c / d * d = %f\n", c / d * d);

    /* Using the unary minus operator */
    printf("-a = %i\n", -a);

    return 0;
}
