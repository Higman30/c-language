// kr_temperature3.c

#include "header.h"

#define LOWER 0   /* 表の下限 */
#define UPPER 300 /* 上限 */
#define STEP 20   /* ステップ・サイズ */

/* 華氏-摂氏対応表を印字する */
int main(void)
{
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    return 0;
}