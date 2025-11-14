// kr_gettoken_after.c

#include <string.h>
#include <ctype.h>
#include "kr_header_dcl2.h"

int kr_gettoken_after(void)
{
    int c;
    char *p = token;

    while ((c = kr_getch_after()) == ' ' || c == '\t')
        ;
    if (c == '(')
        if ((c = kr_getch_after()) == ')')
        {
            strcpy(token, "()");
            return tokentype = PARENS;
        } 
        else
        {
            kr_ungetch_after(c);
            return tokentype = '(';
        }
    else if (c == '[')
    {
        for (*p++ = c; (*p++ = kr_getch_after()) != ']'; )
            ;
        *p = '\0';
        return tokentype = BRACKETS;
    }
    else if ( isalpha(c))
    {
        for (*p++ = c; isalnum(c = kr_getch_after()) || c == '_'; )
            *p++ = c;
        *p = '\0';
        kr_ungetch_after(c);
        return tokentype = NAME;
    }
    else
        return tokentype = c;
}
