// kr_strcpyp2_after.c


/* strcpy: tをsにコピーする ; ポインタ版2 */
void kr_strcpyp2_after(char *s, const char *t)
{
    while ((*s++ = *t++) != '\0')
        ;
}
