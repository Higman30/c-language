// kr_swap_after.c


/* kr_swap: v[i]とv[j]を交換する */
void kr_swap_after(int v[], int i, int j)
{
    int temp;
    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}
