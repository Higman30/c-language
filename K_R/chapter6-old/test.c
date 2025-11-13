#include <stdio.h>
#include "header.h"

int main(void)
{
    struct nlist *np;

    /* 新規登録 */
    install("foo", "first definition");
    install("bar", "second definition");

    /* 更新（foo を上書き） */
    install("foo", "updated definition");

    /* 取り出しテスト */
    np = lookup("foo");
    if (np)
        printf("foo => %s\n", np->defn);
    else
        printf("foo not found\n");

    np = lookup("bar");
    if (np)
        printf("bar => %s\n", np->defn);
    else
        printf("bar not found\n");

    np = lookup("baz");
    if (np)
        printf("baz => %s\n", np->defn);
    else
        printf("baz not found\n");

    return 0;
}
