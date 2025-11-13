// kr_main_qsort2_after.c


#include <stdio.h>
#include <string.h>
#include "kr_header_qsort2.h"

#define MAXLINES 5000    /* ソートすべき最大の行数 */
char *lineptr[MAXLINES];  /* テキスト行へのポインタ */


/* 入力行をソートする */
int main(int argc, char *argv[])
{
    int nlines; /* 読み込まれた入力行の数 */
    int numeric = 0;   /* 数値ソートなら1 */

    if (argc > 1 && kr_strcmp_after(argv[1], "-n") == 0)
        numeric = 1;
    if ((nlines = kr_readlines_after(lineptr, MAXLINES)) >= 0)
    {
        kr_qsort2_after((void **) lineptr, 0, nlines-1,
            (int (*)(void *, void *))(numeric ? kr_numcmp_after : kr_strcmp_after));
        kr_writelines_after(lineptr, nlines);
        return 0;
    } else {
        printf("input too big to sort\n");
        return 1;
    }
}
