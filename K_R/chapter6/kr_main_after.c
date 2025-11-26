// kr_main_after.c

#include "kr_header.h"

#define NKEYS (sizeof keytab / sizeof(keytab[0]))

int main(void)
{
    int n;
    char word[MAXWORD];   

    while (kr_getword_after(word, MAXWORD) != EOF)
        if (isalpha(word[0]))
            if ((n = kr_binsearch_after(word, keytab, NKEYS)) >= 0)
                keytab[n].count++;
    for  (n = 0; n < NKEYS; n++)
        if (keytab[n].count > 0)
            printf("%4d %s\n", keytab[n].count, keytab[n].word);
    return 0;
}
