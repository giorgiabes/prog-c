#include "stdio.h"

int main(void)
{
    int n, triangularNumbers;

    printf("TABLE OF TRIANGULAR NUMBERS\n\n");
    printf(" n    Sum from 1 to n\n");
    printf("---   ---------------\n");

    triangularNumbers = 0;

    for ( n = 1; n <= 10; ++n) {
        triangularNumbers += n;
        printf("%2i             %i\n", n, triangularNumbers);
    }

    return 0;
}
