// kr_getline2.c

#include <stdio.h>
#include "kr_header_longests.h"


/* getline: 特別版 */
int kr_getline2_after(void) {
    int c;
    int i;
    extern char line[];
    
    for (i = 0; i < MAXLINE - 1 && (c=getchar())!=EOF && c!='\n'; i++)
        line[i] = c;
    if (c == '\n')
    {
        line[i] = c;
        i++;
    }
    line[i] = '\0';
    return i;
}