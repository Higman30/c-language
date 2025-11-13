// kr_strcat_after.c

/* kr_strcat: tをsの終わりに連結する ; sは十分大きくなければならない */
void kr_strcat_after(char s[], const char t[])
{
    int i;
    int j;

    i = j = 0;
    while (s[i] != '\0')    /* sの終わりを探す */
        i++;
    while ((s[i++] = t[j++]) != '\0') /* tをコピーする */
        ;
}
