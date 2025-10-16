// kr_lcount.c

#include "header.h"

/* 入力を行数をカウント */
int main(void)
{
    int c;
    int nl;

    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n');
            ++nl;
    printf("%ld\n", nl);

    return 0;
}