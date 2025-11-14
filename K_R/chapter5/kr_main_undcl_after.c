// kr_main_undcl_after.c

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "kr_header_dcl2.h"


/* undcl: ことばによる記述を宣言に変換する */
int main(void)
{
    int type;
    char temp[MAXTOKEN];

    while (kr_gettoken_after() != EOF)
    {
        strcpy(out, token);
        while ((type = kr_gettoken_after()) != '\n')
            if (type == PARENS || type == BRACKETS)
                strcat(out, token);
            else if (type == '*')
            {
                sprintf(temp, "(*%s)", out);
                strcpy(out, temp);
            }
            else if (type == NAME)
            {
                sprintf(temp, "%s %s", token, out);
                strcpy(out, temp);
            }
            else
                 printf("invalid input at %s\n", token);
        printf("%s\n", out);
    }   
    return 0;
}
