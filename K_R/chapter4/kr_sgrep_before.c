// kr_sgrep_before.c

#include <stdio.h>
#include "header_after.h"

#define MAXLINE 1000 /* 入力行の最大長 */


/* パターンにマッチするすべての行を探す */
main()
{
    char line[MAXLINE];
    int found = 0;

    while (kr_getline_before(line, MAXLINE) > 0) 
    {
        if (kr_strindex_before(line, pattern) >= 0)
        {
            printf("%s", line);
            found++;
        }
    }

    return found;
}