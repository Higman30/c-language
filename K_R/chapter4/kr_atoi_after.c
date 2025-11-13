// kr_atoi_after.c

#include "headeratoi.h"

/* atoi: atofを使って文字列sを整数に変換する */
int kr_atoi_after(const char s[])
{
    return (int) kr_atof_after(s);
}