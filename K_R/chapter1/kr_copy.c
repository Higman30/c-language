// kr_copy.c

#include "header.h"

/* 入力を出力に複写:第1版 */
int main(void)
{
    int c;

    c = getchar();
    while (c != EOF)
    {
        putchar(c);
        c = getchar();
    }
    return 0;
}