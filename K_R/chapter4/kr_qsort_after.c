// kr_qsort_after.c

#include "headerqsort.h"

/* qsort: v[left]...v[right]を上昇順にソートする */
void kr_qsort_after(int v[], int left, int right)
{
        int i;
        int last;

        if (left >= right)   /* 配列が2より少ない要素を */
            return;         /* 含むときは何もしない */
        kr_swap_after(v, left, (left + (right - left)/2));    /* 分割要素を */
        last = left;                        /* v[0]に移動 */
        for (i = left+1; i <= right; i++)   /* 分割 */
        {
            if (v[i] < v[left])
                kr_swap_after(v, ++last, i);
        }
        kr_swap_after(v, left, last);    /* 分割要素を回復 */
        kr_qsort_after(v, left, last-1);
        kr_qsort_after(v, last+1, right);
}
