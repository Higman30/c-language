// kr_squeeze_before.c

/* kr_squeeze: sからcをすべて取り除く */
void kr_squeeze_before(char s[], int c)
{
    int i;
    int j;

    for (i = j = 0; s[i] != '\0'; i++)
        if (s[i] != c)
            s[j++] = s[i];
        s[j] = '\0';
}
