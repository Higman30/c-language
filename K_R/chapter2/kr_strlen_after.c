// kr_strlen_after.c

/* strlen: sの長さを返す */
int kr_strlen_after(const char s[])
{
    int i;

    i = 0;
    while (s[i] != '\0')
        ++i;

    return i;
}