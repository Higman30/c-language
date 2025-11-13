// kr_atof_after.c

#include <ctype.h>

/* kr_atof: 文字列sをdoubleに変換する */
double kr_atof_after(const char s[])
{
    double val;
    double power;
    int i;
    int sign;

    for (i = 0; isspace((unsigned char)s[i]); i++) /* 空白を飛ばす */
        ;
    sign = (s[i] == '-')? -1 : 1;
    if (s[i] == '+' || s[i] == '-')
        i++;
    for (val = 0.0; isdigit((unsigned char)s[i]); i++)
        val = 10.0 * val + (s[i] - '0');
    if (s[i] == '.')
        i++;
    for (power = 1.0; isdigit((unsigned char)s[i]); i++)
    {
        val = 10.0 * val + (s[i] - '0');
        power *= 10.0;
    }
    
    return sign * val / power;
}