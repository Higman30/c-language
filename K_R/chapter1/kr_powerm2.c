// kr_powerm2.c

#include <stdio.h>
#include "header.h"

/* べき乗関数をテストする */
int main(void)
{
    for (int i = 0; i < 10; ++i)
        printf("%d %d %d\n", i, power2(2,i), power2(-3,i));
    return 0;
}