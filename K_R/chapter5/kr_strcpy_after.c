// kr_strcpy_before.c

#include <stddef.h>

/* strcpy: tをsにコピーする ; 配列添字版 */
void kr_strcpy_before(char *s, const char *t)
{
    int i;

    i = 0;
    while ((s[i] = t[i]) != '\0')
        i++;
}
