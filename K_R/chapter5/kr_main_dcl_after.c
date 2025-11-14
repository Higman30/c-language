// kr_main_dcl_after.c


#include <stdio.h>
#include <string.h>
#include "kr_header_dcl2.h"


int main(void)  /* 宣言をことばによる記述に変換する */
{
    while (kr_gettoken_after() != EOF)     /* 行の最初のトークンは */
    {
        strcpy(datatype, token);    /* データ型である */
        out[0] = '\0';
        kr_dcl_after();    /* 行の残りを解析 */
        if (tokentype != '\n')
            printf("syntax error\n");
        printf("%s: %s %s\n", name, out, datatype);
    }
    return 0;
}
