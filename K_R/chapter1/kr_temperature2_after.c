// kr_temperature2_after.c

#include <stdio.h>


/* fahr=0,20,…,300に対して、華氏-摂氏対応表を印字する */
int main(void)
{
    float fahr;
    float celsius;
    int lower;
    int upper;
    int step;

    lower = 0;      /* 温度表の下限 */
    upper = 300;    /* 上限 */
    step = 20;      /* きざみ */

    fahr = lower;
    while (fahr <= upper)
    {
        celsius = (5.0 / 9.0 * (fahr - 32.0));
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}