// kr_dirdcl_before.c


/* dirdcl: 直接の宣言子を解析する */
void kr_dirdcl_before(void)
{
    int type;

    if (tokentype == '(')   /* ( dcl ) */
    {
        kr_dcl_before();
        if (tokentype != ')')
            printf("error: missing )\n");
    }
    else if (tokentype == NAME) /* variable name */
    {
        strcpy(name, token);
    }
    else
        printf("error: expected name or (dcl)\n");
    while ((type=kr_gettoken_before()) == PARENS || type == BRACKETS)
        if (type == PARENS)
            strcat(out, " function returning");
        else
        {
            strcat(out, " array");
            strcat(out, token);
            strcat(out, " of");
        }
}
