// kr_getline2_before.c

#include "headers.h"
#include <stdio.h>

/* getline: 特別版 */
int kr_getline2_before(void) {
    int c;
    int i;
    extern char line[];

    for (i = 0; i < MAXLINE-1 && (c=getchar())!=EOF && c!='\n'; i++)
        line[i] = c;
    if (c == '\n')
    {
        line[i] = c;
        i++;
    }
    line[i] = '\0';
    return i;
}