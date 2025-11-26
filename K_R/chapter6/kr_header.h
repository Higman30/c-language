// kr_header.h

#ifndef KR_HEADER_H
#define KR_HEADER_H

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAXWORD 100

struct key {
    char *word;
    int   count;
};

extern struct key keytab[];

// 関数プロトタイプ宣言
int kr_getword_after(char *,int);
int kr_binsearch_after(char *, struct key tab[], int);
int kr_getword_after(char *, int);
int kr_getch_after(void);
void kr_ungetch_after(int);

#endif
