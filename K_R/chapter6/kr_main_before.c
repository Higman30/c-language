// kr_main_before.c

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAXWORD 100

struct key {
    char *word;
    int count;
} keytab[] = {
    "auto", 0,
    "break", 0,
    "case", 0,
    "char", 0,
    "const", 0,
    "continue", 0,
    "default", 0,
    /* ... */
    "unsigned", 0,
    "void", 0,
    "volatile", 0,
    "while", 0
};

#define NKEYS (sizeof keytab / sizeof(keytab[0]))


int kr_getword_before(char *, int);
int kr_binsearch_before(char *, struct key *, int);

main()
{
    int n;
    char word[MAXWORD];   

    while (kr_getword_before(word, MAXWORD) != EOF)
        if (isalpha(word[0]))
            if ((n = kr_binsearch_before(word, keytab, NKEYS)) >= 0)
                keytab[n].count++;
    for  (n = 0; n < NKEYS; n++)
        if (keytab[n].count > 0)
            printf("%4d %s\n", keytab[n].count, keytab[n].word);
    return 0;
}
