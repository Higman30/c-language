// kr_temperature2.c

#include "header.h"

/* fahr=0,20,…,300に対して、華氏-摂氏対応表を印字する */
int main(void)
{
    float fahr;    /* 温度表の下限 */
    float celsius; /* 上限 */
    int lower;     /* きざみ */
    int upper;
    int step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper)
    {
        celsius = (5.0 / 9.0 * (fahr - 32.0));
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}