// kr_copy2.c

#include <stdio.h>
#include "header.h"

/* 入力を出力に複写:第2版 */
int main(void)
{
    int c;

    while ((c = getchar ()) != EOF)
        putchar(c);
    return 0;
}