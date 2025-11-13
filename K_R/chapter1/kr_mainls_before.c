// kr_mainls_before.c

#include <stdio.h>
#include "headers.h"

/* 最長行を印字する; 特別版 外部変数版 */
int main(void)
{
    int len;
    extern int max;
    extern char longest[];

    max = 0;
    while((len = kr_getline2_before()) > 0)
        if(len > max)
        {
            max = len;
            kr_copy4_before();
        }
    if (max > 0)    /* 行があった */
        printf("%s", longest);

    return 0;
}
