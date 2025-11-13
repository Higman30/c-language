// kr_getop_after.c

#include <ctype.h>
#include "headercalc_after.h"

/* getop: 次の演算子あるいは数値の被演算数をとってくる */
int kr_getop_after(char s[])
{
    int i;
    int c;

    while ((s[0] = c = kr_getch_after()) == ' ' || c == '\t')
        ;
    s[1] = '\0';
    if (!isdigit(c) && c != '.')
        return c; /* 数ではない */
    i = 0;
    if (isdigit(c)) /* 整数部を集める */
    while (isdigit(s[++i] = c = kr_getch_after()))
        ;
    if (c == '.') /* 小数部を集める */
    while (isdigit(s[++i] = c = kr_getch_after()))
        ;
    s[i] = '\0';
    if (c != EOF)
        kr_ungetch_after(c);
    return NUMBER;
}
