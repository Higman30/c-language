// headercalc_after.h

#ifndef HEADERCALC_AFTER_H
#define HEADERCALC_AFTER_H

#include <stdio.h>

#define MAXOP 100 /* 非演算数、演算子の最大サイズ */
#define NUMBER '0'  /* 数字があったという記号 */

// 関数プロトタイプ宣言
int kr_getop_after(char []);
double kr_pop_after(void);
void kr_push_after(double f);
int kr_getch_after(void);
void kr_ungetch_after(int c);

#endif