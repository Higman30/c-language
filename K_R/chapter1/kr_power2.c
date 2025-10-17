// kr_power2.c

#include "header.h"

/* power: baseのn乗のべき; n >= 0; 第2版 */
int power2(int base, int n)
{
    if (n < 0)
        return 0;

    int p = 1;

    for (; n > 0; --n)
        p = p * base;

    return p;
}