// kr_strcpyp3_after.c


/* strcpy: tをsにコピーする ; ポインタ版2 */
void kr_strcpyp3_after(char *s, const char *t)
{
    while ((*s++ = *t++) != '\0')
        ;
}
