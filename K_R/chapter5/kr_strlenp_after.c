// kr_strlenp_after.c

#include <stddef.h>

/* strlen: 文字列sの長さを返す */
size_t kr_strlenp_after(const char *s)
{
    const char *p = s;

    while (*p != '\0')
        p++;

    return (size_t)(p - s);
}
