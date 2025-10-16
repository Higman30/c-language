// mainp.c

#include "header.h"

int main(void)
{
    char word[MAXWORD];
    struct key *p;

    while (getword(word, MAXWORD) != EOF)
        if (isalpha((unsigned char)word[0]))
            if ((p = binsearchp(word, keytab, NKEYS)) != NULL)
                p->count++;
    for  (p = keytab; p < keytab + NKEYS; p++)
        if (p->count > 0)
            printf("%4d %s\n", p->count, p->word);
    return 0;
}