// kr_atoi_after.c

#include <ctype.h>

/* atoi: sを整数に変換する ; 第２版 */
int kr_atoi_after(const char s[])
{
    int i;
    int n;
    int sign;

    for (i = 0; isspace((unsigned char)s[i]); ++i) /* 空白を飛ばす */
        ;
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-')
        i++;
    for (n = 0; isdigit((unsigned char)s[i]); i++)
        n = 10 * n + (s[i] - '0');

    return sign * n;
}
