// kr_strlenp_before.c


/* strlen: 文字列sの長さを返す */
int kr_strlenp_before(char *s)
{
    char *p = s;

    while (*p != '\0')
        p++;

    return p - s;
}
