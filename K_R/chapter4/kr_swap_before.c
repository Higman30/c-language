// kr_swap_before.c


/* swap: v[i]とv[j]を交換する */
void kr_swap_before(int v[], int i, int j)
{
    int temp;
    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}
