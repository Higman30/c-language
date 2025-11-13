// kr_main_qsort_after.c

#include <stdio.h>

#include "kr_header_qsort.h"


char *lineptr[MAXLINES];    /* テキスト行へのポインタ */


/* 入力行をソートする */
int main(void)
{
    int nlines;     /* 読み込まれた入力行の数 */

    if ((nlines = kr_readlines_after(lineptr, MAXLINES)) >= 0)
    {
        kr_qsort_after(lineptr, 0, nlines-1);
        kr_writelines_after(lineptr, nlines);
        return 0;
    } else
    {
        printf("error: input too big to sort\n");
        return 1;
    }
}

/* readlines:入力行を読み込む */
int kr_readlines_after(char *lineptr[], int maxlines)
{
    int len;
    int nlines;
    char *p;
    char line[MAXLEN];

    nlines = 0;
    while ((len = kr_getline_after(line, MAXLEN)) > 0)
        if (nlines >= maxlines || (p = kr_alloc_after(len)) == NULL)
            return -1;
        else
        {
            line[len-1] = '\0';     /* 改行を消す */
            kr_strcpyp3_after(p, line);
            lineptr[nlines++] = p;
        }
    return nlines;
}

/* writelines:出力行を書き出す */
void kr_writelines_after(char *lineptr[], int nlines)
{
    int i;

    for (i = 0; i < nlines; i++)
        printf("%s\n", lineptr[i]);
}
