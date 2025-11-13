// kr_copy4_before.c


/* copy: 特別版 */
void kr_copy4_before(void)
{
    int i;
    extern char line[];
    extern char longest[];

    i = 0;
    while ((longest[i] = line[i]) != '\0')
        i++;
}
