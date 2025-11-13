// kr_stack_before.c

#include "headercalc.h"
#define MAXVAL 100 /* valスタックの最大の長さ */

int sp; /* スタック・ポインタ */
double val[MAXVAL]; /* 値のスタック */

/* push: fを値スタックにプッシュする */
void kr_push_before(double f)
{
    if (sp < MAXVAL)
        val[sp++] = f;
    else
        printf("error: stack full, can't push %g\n", f);
}

/* pop: スタックから一番上の値をポップして返す */
double kr_pop_before(void)
{
    if (sp > 0)
        return val[--sp];
    else
    {
        printf("error: stack empty\n");
        return 0.0;
    }
}