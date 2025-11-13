// kr_dcl_before.c


/* dcl: 宣言子を解析する */
void dcl(void)
{
    int ns;

        for (ns= 0; gettoken() == '*'; )
            ns++;
        dirdcl();
        while (ns-- > 0)
            strcat(out, " pointer to");
        
}