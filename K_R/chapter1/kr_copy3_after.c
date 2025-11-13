// kr_copy3_after.c


/* copy: fromをtoにコピー ; toは十分大きいと仮定 */
void kr_copy3_after(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
