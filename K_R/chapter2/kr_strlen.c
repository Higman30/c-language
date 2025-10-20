// kr_strlen.c

/* strlen: sの長さを返す */
int strlen(char s[])
{
    int i;

    i = 0;
    while (s[i] != '\0')
        ++i;
}
