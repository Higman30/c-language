// kr_squeeze_after.c

/* kr_squeeze: sからcをすべて取り除く */
int kr_squeeze_after(char s[], int c)
{
    int i;
    int j;

    for (i = j = 0; s[i] != '\0'; i++)
    {
        if (s[i] != c)
            s[j++] = s[i];
    }
        s[j] = '\0';

    return 0;
}
