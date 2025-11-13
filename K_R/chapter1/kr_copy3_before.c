// kr_copy3_before.c


/* copy: fromをtoにコピー ; toは十分大きいと仮定 */
void kr_copy3_before(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
