// kr_printd_before.c

#include <stdio.h>


/* printd: nを10進で印字 */
 void kr_printd_before(int n)
{
    if (n < 0)
    {
        putchar('-');
        n = -n;
    }
    if (n / 10)
        kr_printd_before(n / 10);
    putchar(n % 10 + '0');
}
