// kr_sgrep_after.c

#include <stdio.h>
#include "header_after.h"

const char pattern[] = "ould";   /* 探すべきパターン */

/* sgrep: パターンにマッチするすべての行を探す */
int main(void)
{
    char line[MAXLINE];
    int found = 0;

    while (kr_getline_after(line, MAXLINE) > 0) 
    {
        if (kr_strindex_after(line, pattern) >= 0)
        {
            printf("%s", line);
            found++;
        }
    }

    return found;
}