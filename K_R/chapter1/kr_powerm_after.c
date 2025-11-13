// kr_powerm_after.c

#include <stdio.h>
#include "kr_header_power.h"


/* べき乗関数をテストする */
int main(void)
{
    int i;

    for (i = 0; i < 10; ++i)
        printf("%d %d %d\n", i, kr_power_after(2,i), kr_power_after(-3,i));
    return 0;
}
