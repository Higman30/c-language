// kr_temperature.c

#include <stdio.h>
#include "header.h"

/* fahr=0,20,…,300に対して、華氏-摂氏対応表を印字する */
int main(void)
{
    int fahr;    /* 温度表の下限 */
    int celsius; /* 上限 */
    int lower;   /* きざみ */
    int upper;
    int step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper)
    {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}