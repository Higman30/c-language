// kr_atoi_before.c

#include <ctype.h>

/* atoi: sを整数に変換する ; 第２版 */
int kr_atoi_before(char s[])
{
    int i;
    int n;
    int sign;

    for (i = 0; isspace(s[i]); ++i) /* 空白を飛ばす */
        ;
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-')
        i++;
    for (n = 0; isdigit(s[i]); i++)
        n = 10 * n + (s[i] - '0');

    return sign * n;
}
