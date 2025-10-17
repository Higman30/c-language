// kr_lcount.c

#include <stdio.h>
#include "header.h"

/* 入力を行数をカウント */
int main(void)
{
    int c;
    int nl;

    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
    printf("%d\n", nl);

    return 0;
}