// kr_binsearch_before.c


/* binsearch: tab[0]...tab[n-1]の中の語を探す */
int kr_binsearch_before(char *word, struct key tab[], int n)
{
    int cond;
    int low;
    int high;
    int mid;

    low = 0;
    high = n - 1;
    while (low <= high){
        mid = (low+high) / 2;
        if ((cond = strcmp(word, tab[mid].word)) < 0)
            high = mid - 1;
        else if (cond > 0)
            low = mid + 1;
        else
            return mid;
    }
    return - 1;
}
