// kr_ccount2.c

#include "header.h"

/* 入力を文字をカウント:第2版 */
int main(void)
{
    long nc;

    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%ld\n", nc);

    return 0;
}