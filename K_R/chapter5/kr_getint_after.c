// kr_getint_after.c

#include <ctype.h>
#include <stdio.h>
#include "kr_header_getint.h"

/* getint: 入力から次の整数を取り出して*pnに入れる */
int kr_getint_before(int *pn)
{
    int c;
    int sign;

    while (isspace(c = getch())) /* 空白を飛ばす */
        ;
    if (!isdigit(c) && c != EOF && c != '+' && c!= '-')
    {
        ungetch(c); /* 空白ではない */
        return 0;
    }
    sign = (c  == '-') ? -1 : 1;
    if (c == '+' || c == '-')
        c = getch();
    for (*pn = 0; isdigit(c); c = getch())
        *pn = 10 * *pn + (c - '0');
    *pn *= sign;
    if (c != EOF)
        ungetch(c);
    return c;
}
