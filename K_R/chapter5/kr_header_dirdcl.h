// kr_header_dirdcl.h

#ifndef KR_HEADER_DIRDCL_H
#define KR_HEADER_DIRDCL_H

extern char out[];
extern int tokentype;
extern char name[];
extern char token[];

enum { NAME = 1, PARENS, BRACKETS};

// 関数プロトタイプ宣言
int  kr_gettoken_after(void);
void kr_dcl_after(void);
void kr_dirdcl_after(void);

#endif
