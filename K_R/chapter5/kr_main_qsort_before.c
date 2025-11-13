// kr_main_qsort_before.c

#include <stdio.h>
#include <string.h>

#define MAXLINES 5000       /* ソートすべき最大の行数 */

char *lineptr[MAXLINES];    /* テキスト行へのポインタ */

int readlines(char *lineptr[], int nlines);
void writelines(char *lineptr[], int nlines);

void qsort(char *lineptr[], int left, int right);

/* 入力行をソートする */
main()
{
    int nlines;     /* 読み込まれた入力行の数 */

    if ((nlines = readlines(lineptr, MAXLINES)) >= 0)
    {
        qsort(lineptr, 0, nlines-1);
        writelines(lineptr, nlines);
        return 0;
    } else
    {
        printf("error: input too big to sort\n");
        return 1;
    }
}

#define MAXLEN 1000     /* 任意の入力行の最大長　*/

int getline(char *, int);
char *alloc(int);

/* readlines:入力行を読み込む */
int readlines(char *lineptr[], int maxlines)
{
    int len;
    int nlines;
    char *p;
    char line[MAXLEN];

    nlines = 0;
    while ((len = getline(line, MAXLEN)) > 0)
        if (nlines >= maxlines || (p = alloc(len)) == NULL)
            return -1;
        else
        {
            line[len-1] = '\0';     /* 改行を消す */
            strcpy(p, line);
            lineptr[nlines++] = p;
        }
    return nlines;
}

/* writelines:出力行を書き出す */
void writelines(char *lineptr[], int nlines)
{
    int i;

    for (i = 0; i < nlines; i++)
        printf("%s\n", lineptr[i]);
}