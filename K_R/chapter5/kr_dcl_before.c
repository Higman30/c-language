// kr_dcl_before.c


/* dcl: 宣言子を解析する */
void kr_dcl_before(void)
{
    int ns;

    for (ns= 0; kr_gettoken_before() == '*'; )    /* '*'を数える */
        ns++;
        kr_dirdcl_before();
    while (ns-- > 0)
        strcat(out, " pointer to");
        
}
