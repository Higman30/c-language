// headers.h

#ifndef HEADERS_H
#define HEADERS_H

#define MAXLINE 1000    /* 入力行の最大長 */

int max;    /* いままで出てきた最大長 */
char line[MAXLINE]; /* 現在の入力行 */
char longest[MAXLINE];  /* 格納されている最長行 */


// 関数プロトタイプ宣言
int kr_getline2_before(void);
void kr_copy4_before(void);

#endif
