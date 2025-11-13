// kr_ccount_before.c


#include <stdio.h>


/* 入力を文字をカウント:第1版 */
main()
{
    long nc;

    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("%ld\n", nc);
}