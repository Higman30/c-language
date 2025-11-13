// kr_strcmpp_before.c


/* strcmp: s<tなら<0, s==tなら0, s>tなら>0を返す */
int kr_strcmpp_before(char *s, char *t)
{
    for ( ; *s == *t; s++, t++)
        if (*s == '\0')
            return 0;
    return *s - *t;
}
