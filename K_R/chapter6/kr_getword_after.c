// kr_getword_after.c

#include "kr_header.h"

/* getword: 入力から次の語または文字を求める */
int kr_getword_after(char *word, int lim)
{
    int c;
    char *w = word;

//  while (isspace(c = kr_getch_before()))  // 空白類をスキップ
    while (c = kr_getch_after() != EOF && isspace((unsigned char)c ))  // 空白類をスキップ
        ;
    if (c != EOF)
        *w++ = c;
    if ( !isalpha((unsigned char)c))
    {
        *w = '\0';
        return c;
    }
    for ( ; --lim > 0; w++)
        // if (!isalnum(*w = kr_getch_after()))
        if (!isalnum(*w = (unsigned char)(kr_getch_after())))
        {
            kr_ungetch_after(*w);
            break;
        }
    *w = '\0';
    return word[0];
}
