// getword.c

#include <ctype.h>
#include <stdio.h>

int getch(void);
void ungetch(int);

int getword(char *word, int lim)
{
    int c;
    char *w = word;

    while (isspace((unsigned char) (c = getch()))) //空白類をスキップ
        ;
    if (c == EOF)
        return EOF;
    
    *w++ = (unsigned char)c;
    
    if ( !isalpha((unsigned char) c)){
        *w = '\0';
        return c;
    }
    for ( ; --lim > 0; w++)
        if (!isalnum(*w = getch())){
            ungetch(*w);
            break;
        }
    *w = '\0';
    return word[0];
}
