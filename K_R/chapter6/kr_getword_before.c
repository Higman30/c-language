// kr_getword_before.c


/* getword: 入力から次の語または文字を求める */
int kr_getword_before(char *word, int lim)
{
    int c;
    int kr_getch_before(void);
    char *w = word;

    while (isspace(c = kr_getch_before())) //空白類をスキップ
        ;
    if (c != EOF)
        *w++ = c;
    if ( !isalpha(c))
    {
        *w = '\0';
        return c;
    }
    for ( ; --lim > 0; w++)
        if (!isalnum(*w = kr_getch_before()))
        {
            kr_ungetch_before(*w);
            break;
        }
    *w = '\0';
    return word[0];
}
