// kr_swap2_before.c


/* swap: v[i]とv[j]を交換する */
void swap_(char *v[], int i, int j)
{
    int *temp;

    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}
