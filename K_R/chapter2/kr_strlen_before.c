// kr_strlen_before.c

/* strlen: sの長さを返す */
int kr_strlen_before(char s[])
{
    int i;

    i = 0;
    while (s[i] != '\0')
        ++i;

    return i;
}