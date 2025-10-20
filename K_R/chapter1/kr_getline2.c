// kr_getline2.c

#include "kr_longest.h"
#include <stdio.h>

/* getline: 特別版 */
int kr_getline(char s[], int lim) {
    int c, i;
    for (i = 0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; i++)
        s[i] = c;
    if (c == '\n') s[i++] = c;
    s[i] = '\0';
    return i;
}