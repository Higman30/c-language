// kr_ccount.c

#include "header.h"

/* 入力を文字をカウント:第1版 */
int main(void)
{
    long nc;

    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("%ld\n", nc);

    return 0;
}