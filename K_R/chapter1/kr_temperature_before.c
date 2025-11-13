// kr_temperaturere_betere.c

#include <stdio.h>


/* fahr=0,20,…,300に対して、華氏-摂氏対応表を印字する */
main()
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
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}