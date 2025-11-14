// kr_main_undcl_before.c


/* undcl: ことばによる記述を宣言に変換する */
main()
{
    int type;
    char temp[MAXTOKEN];

    while (kr_gettoken_before() != EOF)
    {
        strcpy(out, token);
        while ((type = kr_gettoken_before()) != '\n')
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
