// kr_swap2_after.c


/* swap: v[i]とv[j]を交換する */
void kr_swap2_after(void *v[], int i, int j)
{
    void *temp;

    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}
