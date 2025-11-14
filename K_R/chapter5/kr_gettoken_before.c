// kr_gettoken_before.c


int kr_gettoken_before(void)
{
    int c;
    int kr_getch_before(void);
    void kr_ungetch_before(int);
    char *p = token;

    while ((c = kr_getch_before()) == ' ' || c == '\t')
        ;
    if (c == '(')
        if ((c = kr_getch_before()) == ')')
        {
            strcpy(token, "()");
            return tokentype = PARENS;
        } 
        else
        {
            kr_ungetch_before(c);
            return tokentype = '(';
        }
    else if (c == '[')
    {
        for (*p++ = c; (*p++ = kr_getch_before()) != ']'; )
            ;
        *p = '\0';
        return tokentype = BRACKETS;
    }
    else if ( isalpha(c))
    {
        for (*p++ = c; isalnum(c = kr_getch_before()); )
            *p++ = c;
        *p = '\0';
        kr_ungetch_before(c);
        return tokentype = NAME;
    }
    else
        return tokentype = c;
}
