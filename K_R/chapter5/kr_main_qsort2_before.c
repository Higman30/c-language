// kr_main_qsort_before.c


#include <stdio.h>
#include <string.h>

#define MAXLINES 5000    /* ソートすべき最大の行数 */
char *lineptr[MAXLINES];  /* テキスト行へのポインタ */

int readlines(char * lineptr[], int nlines);
void writelines(char *lineptr[], int nlines);

void qsort(void *lineptr[], int left, int right, int (*comp)(void *, void *));
int numcmp(char *, char*);

/* 入力行をソートする */
main(int argc, char *argv[])
{
    int nlines; /* 読み込まれた入力行の数 */
    int numeric = 0;   /* 数値ソートなら1 */

    if (argc > 1 && strcmp(argv[1], "-n") == 0)
        numeric = 1;
    if ((nlines = readlines(lineptr, MAXLINES)) >= 0)
    {
        qsort((void **) lineptr, 0, nlines-1,
            (int (*)(void *, void *))(numeric ? numcmp : strcmp));
        writelines(lineptr, nlines);
        return 0;
    } else {
        printf("input too big to sort\n");
        return 1;
    }
}
