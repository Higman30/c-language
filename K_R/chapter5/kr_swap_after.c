// kr_swap_after.c

#include "kr_header_swap.h"

void kr_swap_after(int *px, int *py) /* *pxと*pyを交換する */
{
    int temp;

    temp = *px;
    *px = *py;
    *py = temp;
}
