// fputsf.c

#include "header.h"
#include <stdio.h>

/* fputs: ファイル iopに文字列　s を出す */
int fputsf(char *s, FILE *iop)
{
  int c;

  while ((c = *s++) != '\0')
    putc(c, iop);
  return ferror(iop) ? EOF : 0;
}