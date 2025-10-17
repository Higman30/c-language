// kr_power.c

#include "header.h"

/* power: baseをn乗する ; n >= 0 */
int power(int base, int n)
{
    if (n < 0)
        return 0;

    int p;

    p = 1;
    for (int i = 1; i <= n; ++i)
        p = p * base;

    return p;
}