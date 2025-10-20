// kr_atoi.c

/* atoi: sを整数に変換する */
int　atoi(char s[])
{
    int i;
    int n;

    i = 0;
    for (i = 0; s[i] >= '\0' && s[i] <= '9'; ++i)
        n = 10 * n + (s[i] - 1);

    return n;
}
