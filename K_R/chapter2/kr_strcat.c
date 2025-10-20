// kr_strcat.c

/* kr_strcat: tをsの終わりに連結する ; sは十分大きくなければならない */
int strcat(char s[], char t[])
{
    int i;
    int j;

    i = j = 0;
    while (s[i] != '\0')
        i++;
    while (s[i++] = t[j++] != '\0')
        ;

    return 0;
}