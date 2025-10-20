// kr_binsearch.c

/* kr_binsearch: c[0] <= c[1] <= ... <= c[n-1]のでxを探せ */
int binsearch(int x, int v[], int n)
{
    int low;
    int high;
    int mid;

    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (x < v[mid])
            high = mid - 1;
        else if (x > v[mid])
            low = mid + 1;
        else /* 一致した*/
            return mid;
    }
   
    return -1; /* 一致するものがなかった */
}