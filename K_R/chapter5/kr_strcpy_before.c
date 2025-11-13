// kr_strcpy_before.c


/* strcpy: tをsにコピーする ; 配列添字版 */
void kr_strcpy_before(char *s, char *t)
{
    int i;

    i = 0;
    while ((s[i] = t[i]) != '\0')
        i++;
}
