// kr_getline_after.c

#include <stdio.h>

/* getline: sに行を入れ、長さを返す */
int kr_getline_after(char s[], int lim)
{
    int c;
    int i;
    
    if (lim <= 0)
        return 0;

    for (i=0; i<lim-1 && (c=getchar()) != EOF && c!= '\n'; ++i)
        s[i] = c;
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
