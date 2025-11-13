// kr_getline_after.c

#include <stdio.h>

/* getline: sに行を入れ、長さを返す */
int kr_getline_after(char s[], int lim)
{
    int c;
    int i;

    if (lim <= 0)  // バッファ長が不正なとき
        return 0;

    i = 0;
    while (--lim > 0 && (c=getchar()) != EOF && c != '\n')
        s[i++] = c;
    if (c == '\n')
        s[i++] = c;
    s[i] = '\0';
    return i;
}