// kr_trim_before.c

/* trim: 後側の空白、タブ、改行文字を取り除く */
int kr_trim_before(char s[])
{
    int n;

    for (n = strlen(s)-1; n >= 0; n--)
    {
        if (s[n] != ' ' && s[n] != '\t' && s[n] != '\n')
            break;
    }
    s[n+1] = '\0';
    return n;
}
