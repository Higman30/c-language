// header_after.h

#ifndef HEADER_AFTER_H
#define HEADER_AFTER_H

#define MAXLINE 1000 /* 入力行の最大長 */

extern const char pattern[];

// 関数プロトタイプ宣言
int kr_getline_after(char line[], int max);
int kr_strindex_after(const char source[], const char searchfor[]);

#endif