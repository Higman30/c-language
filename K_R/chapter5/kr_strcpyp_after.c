// kr_strcpyp_after.c


/* strcpy: tをsにコピーする ; ポインタ版1 */
void kr_strcpyp_after(char *s, const char *t)
{
    while ((*s = *t) != '\0')
    {
        s++;
        t++;
    }
}
