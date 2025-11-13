// kr_writelines_after.c

#include <stdio.h>

/* 出力行を書き出す */
void kr_writelines_after(char *lineptr[], int nlines)
{
    for (int i = 0; i < nlines; i++)
        printf("%s\n", lineptr[i]);
}
