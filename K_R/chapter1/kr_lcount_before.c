// kr_lcount_before.c

#include <stdio.h>


/* 入力を行数をカウント */
main()
{
    int c;
    int nl;

    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
    printf("%d\n", nl);
}
