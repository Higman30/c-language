// kr_strcat_before.c

/* kr_strcat: tをsの終わりに連結する ; sは十分大きくなければならない */
void strcat_before(char s[], char t[])
{
    int i;
    int j;

    i = j = 0;
    while (s[i] != '\0')    /* sの終わりの探す */
        i++;
    while ((s[i++] = t[j++]) != '\0')   /* tをコピーする */
        ;
}
