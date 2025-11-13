// kr_strlen_before.c


/* strlen: 文字列sの長さを返す */
int kr_strlen_before(char *s)
{
    int n;

    for (n = 0; *s != '\0'; s++)
        n++;

    return n;
}
