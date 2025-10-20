// kr_squeeze.c

/* kr_squeeze: sからcをすべて取り除く */
int squeeze(char s[], int c)
{
    int i;
    int j;

    for (int i = j = 0; s[i] != '\0'; i++)
        if (s[i] != c)
            s[j++] = s[i];
        s[j] = '\0';

    return 0;
}