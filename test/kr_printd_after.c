// kr_printd_after.c

#include <stdio.h>
#include <limits.h>


/* kr_printd: nを10進で印字 */
 void kr_printd_after(int n)
{
    unsigned int ui;
/* 2の補数はマイナスに1だけ絶対値が大きいので絶対値を1小さくして符号無しにキャストし
　正にしてから絶対値に1たす */
    if (n < 0)
    {
        putchar('-');
        n = -n;
        ui = (unsigned int)(-(n + 1)) + 1u;
    }
    else
    {
        ui = (unsigned int)n;
    }
    if (ui / 10u)
        kr_printd_after(ui / 10u);
    putchar(ui % 10u + '0');
}

