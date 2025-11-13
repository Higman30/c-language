// kr_qsort_before.c


/* v[left]...v[right]を昇順にソートする */
void qsort(char *v[], int left, int right)
{
    int i;
    int last;
    void swap(char *v[], int i, int j);

    if (left >= right)  /* 配列の要素が2より */
        return;         /* 少ない時は何もしない */
    swap(v, left, (left + right)/2);
    last = left;
    for (i = left+1; i <= right; i++)
        if (strcmp(v[i], v[left]) < 0)
            swap(v, ++last, i);
    swap(v, left, last);
    qsort(v, left, last-1);
    qsort(v, last+1, right);
}
