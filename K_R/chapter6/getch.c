// getch.c

# include "header.h"

//char buf[BUFSIZE];
//int bufp = 0;
//#include "header.h"

int getch(void) 
{   
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)
{if (bufp >= BUFSIZE)
    printf("ungetch: too many characters\n");
else
    buf[bufp++] = c;
}