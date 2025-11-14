// kr_main_dcl_before.c


#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAXTOKEN 100

enum { NAME, PARENS, BRACKETS };

void kr_dcl_before(void);
void kr_dirdcl_before(void);

int kr_gettoken_before(void);
int tokentype;              /* 最後のトークンの型 */
char token[MAXTOKEN];       /* 最後のトークン文字列 */
char name[MAXTOKEN];        /* 識別名 */
char datatype[MAXTOKEN];    /* データ型=char, intなど */
char out[1000];             /* 出力文字列 */

main()  /* 宣言をことばによる記述に変換する */
{
    while (kr_gettoken_before() != EOF)     /* 行の最初のトークンは */
    {
        strcpy(datatype, token);    /* データ型である */
        out[0] = '\0';
        kr_dcl_before();    /* 行の残りを解析 */
        if (tokentype != '\n')
            printf("syntax error\n");
        printf("%s: %s %s \n", name, out, datatype);
    }
    return 0;
}
