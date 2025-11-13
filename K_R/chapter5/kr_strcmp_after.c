// kr_strcmp_after.c


/* strcmp: s<tなら<0, s==tなら0, s>tなら>0を返す */
int kr_strcmp_after(const char *s, const char *t)
{
    int i;

    for (i = 0; s[i] == t[i]; i++)
        if (s[i] == '\0')
            return 0;
    return (unsigned char)s[i] - (unsigned char) t[i];
}
