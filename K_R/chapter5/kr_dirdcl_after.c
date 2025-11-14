// kr_dirdcl_after.c

#include <stdio.h>
#include <string.h>
#include "kr_header_dcl2.h"
#include "kr_header_dirdcl.h"


/* dirdcl: 直接の宣言子を解析する */
void kr_dirdcl_after(void)
{
    int type;

    if (tokentype == '(')   /* ( dcl ) */
    {
        kr_dcl_after();
        if (tokentype != ')')
        {
            printf("error: missing )\n");
        }
    }
    else if (tokentype == NAME) /* variable name */
    {
        strcpy(name, token);
    }
    else
    {
        printf("error: expected name or (dcl)\n");
    }
    while ((type = kr_gettoken_after()) == PARENS || type == BRACKETS)
    {
        if (type == PARENS){
            strcat(out, " function returning");
        }
        else
        {
            strcat(out, " array");
            strcat(out, token);
            strcat(out, " of");
        }
    }
}
