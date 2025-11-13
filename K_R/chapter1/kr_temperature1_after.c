// kr_temperature1.c

#include <stdio.h>


/* fahr=0,20,…,300に対して、華氏-摂氏対応表を印字する */
int main(void)
{
    int fahr;
    int celsius;
    int lower;
    int upper;
    int step;

    lower = 0;      /* 温度表の下限 */
    upper = 300;    /* 上限 */
    step = 20;      /* きざみ */

    fahr = lower;
    while (fahr <= upper)
    {
        celsius = 5 * (fahr - 32) / 9;
        printf("%3d\t%6d\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}