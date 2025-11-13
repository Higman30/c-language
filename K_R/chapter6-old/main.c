// main().c

#include "header.h"

int main(void)
{
    int n;
    char word[MAXWORD];   

    while (getword(word, MAXWORD) != EOF)
        if (isalpha((unsigned char)word[0]))
            if ((n = binsearch(word, keytab, NKEYS)) >= 0)
                keytab[n].count++;
    for  (n = 0; n < NKEYS; n++)
        if (keytab[n].count > 0)
            printf("%4d %s\n", keytab[n].count, keytab[n].word);
    return 0;
}
