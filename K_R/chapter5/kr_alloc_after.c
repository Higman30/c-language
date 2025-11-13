// kr_alloc_after.c

#define ALLOCSIZE 10000 /* 使用可能な場所の大きさ */

#include <stddef.h>

static char allocbuf[ALLOCSIZE]; /* allocのための記憶場所 */
static char *allocp = allocbuf; /* 次の空き位置 */


char* kr_alloc_after(int n) /* n文字へのポインタを返す */
{
    if ( allocbuf + ALLOCSIZE -allocp >= n) /* 入りきる */
    {
        allocp += n;
        return allocp - n; /* 古いp */
    } else  /* 十分な空きがないとき */
        return NULL;
}

void kr_afree_after(char *p) /* pによって指される領域を解放する */
{
    if (p >= allocbuf && p < allocbuf + ALLOCSIZE)
        allocp = p;
}
