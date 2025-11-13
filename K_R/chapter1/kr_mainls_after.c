// kr_mainls_after.c

#include <stdio.h>
#include "kr_header_longests.h"

/* 最も長い入力行を印字する */
int main(void)
{
    int len;
    extern int max;
    extern char line[];
    extern char longest[MAXLINE];
    
    max = 0;
    while((len = kr_getline2_after()) > 0)
        if(len > max)
        {
        max = len;
        kr_copy4_after();
        }
    if (max > 0)    /* 行があった */
        printf("%s", longest);

    return 0;
}
