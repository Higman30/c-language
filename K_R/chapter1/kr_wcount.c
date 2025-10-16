// kr_wcount.c

#include "header.h"

#define IN  1   /* 単語の中 */
#define OUT 0   /* 単語の外 */

/* 入力をちゅうの行、単語、文字のカウント */
int main(void)
{
    int c;
    int nl;
    int nw;
    int nc;
    int state;

    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c== '\t')
            state = OUT;
        else if (state == OUT)
        {
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d\n", nl, nw, nc);

    return 0;
}