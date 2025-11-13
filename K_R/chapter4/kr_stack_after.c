// kr_stack_after.c

#include "headercalc.h"
#define MAXVAL 100 /* valスタックの最大の長さ */

static int sp; /* スタック・ポインタ */
static double val[MAXVAL]; /* 値のスタック */

/* push: fを値スタックにプッシュする */
void kr_push_after(double f)
{
    if (sp < MAXVAL)
        val[sp++] = f;
    else
        printf("error: stack full, can't push %g\n", f);
}

/* pop: スタックから一番上の値をポップして返す */
double kr_pop_after(void)
{
    if (sp > 0)
        return val[--sp];
    else
    {
        printf("error: stack empty\n");
        return 0.0;
    }
}