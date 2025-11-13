// kr_header_qsort2.h

#ifndef KR_HEADER_QSORT2_H
#define KR_HEADER_QSORT2_H


// 関数プロトタイプ宣言
int kr_readlines_after(char *lineptr[], int nlines);
void kr_writelines_after(char *lineptr[], int nlines);

void kr_qsort2_after(void *lineptr[], int left, int right, int (*comp)(void *, void *));

int kr_numcmp_after(const char *, const char *);
int kr_strcmp_after(const char *, const char *);

void kr_swap2_after(void *v[], int, int);


#endif
