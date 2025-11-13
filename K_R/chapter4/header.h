// header.h

#ifndef HEADER_H
#define HEADER_H

char pattern[] = "ould";   /* 探すべきパターン */

// 関数プロトタイプ宣言
int kr_getline_before(char line[], int max);
int strindex_before(char source[], char searchfor[]);

#endif