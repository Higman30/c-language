// kr_atoi_before.c

/* atoi: sを整数に変換する */
int kr_atoi_before(char s[])
{
    int i;
    int n;

    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
        n = 10 * n + (s[i] - '0');

    return n;
}
