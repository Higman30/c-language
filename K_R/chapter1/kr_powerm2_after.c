// kr_powerm2_after.c

#include <stdio.h>
#include "kr_header_power2.h"

/* べき乗関数をテストする */
int main(void)
{
    for (int i = 0; i < 10; ++i)
        printf("%d %d %d\n", i, kr_power2_after(2,i), kr_power2_after(-3,i));
    return 0;
}
