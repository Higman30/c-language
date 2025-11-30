// kr_getword_after.c

#include "kr_header.h"
#include <ctype.h>

/* getword: 入力から次の語または文字を求める */
int kr_getword_after(char *word, int lim)
{
    int c;
    char *w = word;

//  while (isspace(c = kr_getch_before()))  // 空白類をスキップ
    while ((c = kr_getch_after()) != EOF && isspace((unsigned char)c))
    {

    }
    if (c == EOF)
    {
        *w = '\0';
        return EOF;
    }
    *w++ = (char)c;
    if ( !isalpha((unsigned char)c))
    {
        *w = '\0';
        return c;
    }
    for ( ; --lim > 0; w++)
    {
        int tmp = kr_getch_after();
        if (tmp == EOF)
        {
            break;
        }
        // if (!isalnum(*w = kr_getch_after()))
        if (!isalnum(*w = (unsigned char)tmp))
        {
            kr_ungetch_after(*w);
            break;
        }
    }
    *w = '\0';
    return word[0];
}
