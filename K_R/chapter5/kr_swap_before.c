// kr_swap_before.c

// #include "headerswap.h"


void kr_swap_before(int x, int y) /* まちがい */
{
    int temp;

    temp = x;
    x = y;
    y = temp;
}