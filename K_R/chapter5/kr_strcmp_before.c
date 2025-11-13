// kr_strcmp_before.c


/* strcmp: s<tなら<0, s==tなら0, s>tなら>0を返す */
int kr_strcmp_before(char *s, char *t)
{
    int i;

    for (i = 0; s[i] == t[i]; i++)
        if (s[i] == '\0')
            return 0;
    return s[i] - t[i];
}
