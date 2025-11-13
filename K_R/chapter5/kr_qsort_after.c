// kr_qsort_after.c

#include "kr_header_qsort.h"


/* v[left]...v[right]を昇順にソートする */
void kr_qsort_after(char *v[], int left, int right)
{
    int i;
    int last;

    if (left >= right)  /* 配列の要素が2より */
        return;         /* 少ない時は何もしない */
    kr_swap2_after(v, left, (left + right)/2);
    last = left;
    for (i = left+1; i <= right; i++)
        if (kr_strcmp_after(v[i], v[left]) < 0)
            kr_swap2_after(v, ++last, i);
    kr_swap2_after(v, left, last);
    kr_qsort_after(v, left, last-1);
    kr_qsort_after(v, last+1, right);
}
