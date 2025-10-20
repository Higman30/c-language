// kr_copy3.c


/* copy: fromをtoにコピー ; toは十分大きいと仮定 */
int copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
    
    return 0;
}