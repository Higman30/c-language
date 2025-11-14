// kr_header_dcl2.h

#ifndef KR_HEADER_DCL2_H
#define KR_HEADER_DCL2_H

#define MAXTOKEN 100


enum { NAME = 1, PARENS, BRACKETS };
extern int tokentype;              /* 最後のトークンの型 */
extern char token[MAXTOKEN];       /* 最後のトークン文字列 */
extern char name[MAXTOKEN];        /* 識別名 */
extern char datatype[MAXTOKEN];    /* データ型=char, intなど */
extern char out[1000];             /* 出力文字列 */


// 関数プロトタイプ宣言
int  kr_gettoken_after(void);
void kr_dcl_after(void);
void kr_dirdcl_after(void);
int kr_getch_after(void);
void kr_ungetch_after(int);

#endif
