// kr_power2_after.c

#include "kr_header_power2.h"

/* power: baseのn乗のべき; n >= 0; 第2版 */
int kr_power2_after(int base, int n)
{
    if (n < 0)
        return 0;

    int p = 1;

    for (; n > 0; --n)
        p = p * base;

    return p;
}
