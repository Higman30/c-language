// kr_qsort2_after.c

#include "kr_header_qsort2.h"

/* qsort: v[left]...v[write]を昇順にソートする */
void kr_qsort2_after(void *v[], int left, int right,
    int (*kr_comp_after)(void *, void *))
{
    int i;
    int last;
    
    if (left >= right)  /* 配列の要素が二つより少な */
        return;         /* ければ、何もしない */
    kr_swap2_after(v, left, (left + right) / 2);
    last = left;
    for (i = left+1; i <= right; i++)
        if ((*kr_comp_after)(v[i], v[left]) < 0)
            kr_swap2_after(v, ++last, i);
    kr_swap2_after(v, left, last);
    kr_qsort2_after(v, left, last-1, kr_comp_after);
    kr_qsort2_after(v, last+1, right, kr_comp_after);
}
