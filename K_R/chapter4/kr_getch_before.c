// kr_getch_before.c


#define BUFSIZE 100

static char buf[BUFSIZE]; /* ungetch用のバッファ */
static int bufp = 0; /* buf中の次の空き位置 */

int kr_getch_before(void) /* (押し戻された可能性もある)1文字をとってくる */
{
    return (bufp > 0) ? (unsigned char)buf[--bufp] : getchar();
}

void kr_ungetch_before(int c)
{
    if (bufp >= BUFSIZE)
        printf("ungetch : too many characters\n");
    else
        buf[bufp++] = (char)c;
}
