// kr_powerm.c

#include <stdio.h>
#include "header.h"

/* べき乗関数をテストする */
int main(void)
{
    int i;

    for (i = 0; i < 10; ++i)
        printf("%d %d %d\n", i, power(2,i), power(-3,i));
    return 0;
}