// headercalc.h

#ifndef HEADERCALC_H
#define HEADERCALC_H

#include <stdio.h>

#define MAXOP 100 /* 被演算数、演算子の最大サイズ */
#define NUMBER '0'  /* 数字があったという記号 */

// 関数プロトタイプ宣言
int kr_getop_before(char []);
double kr_pop_before(void);
void kr_push_before(double);
int kr_getch_before(void);
void kr_ungetch_before(int);

#endif