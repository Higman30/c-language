// kr_copy_before.c

#include <stdio.h>


/* 入力を出力に複写:第1版 */
main()
{
    int c;

    c = getchar();
    while (c != EOF)
    {
        putchar(c);
        c = getchar();
    }
}