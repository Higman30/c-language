// kr_mainl.c

#include <stdio.h>
#define MAXLINE 1000
#include "header.h"

/* 最も長い入力行を印字する */
int main(void)
{
    int len;    /* 現在行の長さ */
    int max;    /* いままで出てきた最大長 */
    char line[MAXLINE]; /* 現在の入力行 */
    char longest[MAXLINE];  /* 格納されている最長行 */

    max = 0;
    while((len = kr_getline(line, MAXLINE)) > 0)
        if(len > max)
        {
        max = len;
        copy3(longest, line);
        }
    if (max > 0)    /* 行があった */
        printf("%s", longest);

    return 0;
}