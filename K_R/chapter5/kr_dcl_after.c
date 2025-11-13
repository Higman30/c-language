// kr_dcl_after.c


/* dcl: 宣言子を解析する */
void kr_dcl_after(void)
{
    int ns;

        for (ns= 0; kr_gettoken_after() == '*'; )
            ns++;
        kr_dirdcl_after();
        while (ns-- > 0)
            strcat(out, " pointer to");
        
}
