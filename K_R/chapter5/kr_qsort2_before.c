// kr_qsort2_before.c


/* qsort: v[left]...v[write]を昇順にソートする */
void qsort(void *v[], int left, int right,
    int (*comp)(void *, void *))
{
    int i;
    int last;
    void swap(void *v[], int, int);
    
    if (left >= right)  /* 配列の要素が二つより少な */
        return;         /* ければ、何もしない */
    swap(v, left, (left + right) / 2);
    last = left;
    for (i = left+1; i <= right; i++)
        if ((*comp)(v[i], v[left]) < 0)
            swap(v, ++last, i);
    swap(v, left, last);
    qsort(v, left, last-1, comp);
    qsort(v, last+1, right, comp);
}
