// kr_header_qsort.h

#ifndef KR_HEADER_QSORT_H
#define KR_HEADER_QSORT_H

#define MAXLINES 5000       /* ソートすべき最大の行数 */
#define MAXLEN 1000     /* 任意の入力行の最大長　*/

// 関数プロトタイプ宣言
int kr_getline_after(char *, int);
void kr_qsort_after(char *lineptr[], int left, int right);
int kr_readlines_after(char *lineptr[], int nlines);
void kr_writelines_after(char *lineptr[], int nlines);
char *kr_alloc_after(int);
void kr_strcpyp3_after(char *to, const char *from);
int  kr_strcmp_after(const char *s, const char *t);
void kr_swap2_after(char *v[], int i, int j);

#endif
