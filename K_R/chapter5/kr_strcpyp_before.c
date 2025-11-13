// kr_strcpyp_before.c


/* strcpy: tをsにコピーする ; ポインタ版1 */
void kr_strcpyp_before(char *s, char *t)
{
    while ((*s = *t) != '\0')
    {
        s++;
        t++;
    }
}
