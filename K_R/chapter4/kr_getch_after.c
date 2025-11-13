// kr_getch_after.c

#include "headercalc_after.h"

#define BUFSIZE 100

static char buf[BUFSIZE]; /* ungetch用のバッファ */
static int bufp = 0; /* buf中の次の空き位置 */

int kr_getch_after(void) /* (押し戻された可能性もある)1文字をとってくる */
{
    return (bufp > 0) ? (unsigned char)buf[--bufp] : getchar();
}

void kr_ungetch_after(int c)
{
    if (bufp >= BUFSIZE)
        printf("ungetch : too many characters\n");
    else
        buf[bufp++] = (char)c;
}
