// kr_reverse_after.c

#include <string.h>

/* reverse: 文字列sをその位置で逆順にする */
void kr_reverse_after(char s[])
{
    int c;
    int i;
    int j;

    for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}