// kr_copy4_after.c


/* copy: 特別版 */
void kr_copy4_after(void)
{
    int i;
    extern char line[];
    extern char longest[];

    i = 0;
    while ((longest[i] = line[i]) != '\0')
        i++;
}
