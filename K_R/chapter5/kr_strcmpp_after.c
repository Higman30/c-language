// kr_strcmpp_after.c


/* strcmp: s<tなら<0, s==tなら0, s>tなら>0を返す */
int kr_strcmpp_after(const char *s, const char *t)
{
    for ( ; *s == *t; s++, t++)
        if (*s == '\0')
            return 0;
    return (unsigned char) *s - (unsigned char) *t;
}
