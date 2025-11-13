// kr_main_swap.c

#include <stdio.h>
#include "kr_header_swap.h"


int main(void)
{
    int x = 10;
    int y = 20;

    kr_swap_after(&x, &y);
    
    printf("%d %d\n", x, y);
    
    return 0;
}
