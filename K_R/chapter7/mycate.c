// mycate.c

#include <stdio.h>
#include <stdlib.h>
#include "header.h"

/* cat： ファイルの連結，第2版 */
int main(int argc, char *argv[])
{
  FILE *fp;
  char *prog = argv[0]; /* プログラム名、エラー表示で使う */

  if (argc == 1) {  /* 引数なし；標準入力をコピー */
    filecopy(stdin, stdout) ;
  }else{
    while (--argc > 0)
      if ((fp = fopen (*++argv, "r")) == NULL) {
        fprintf (stderr, "%s: can't open %s\n", exit(1);
      } else {
        filecopy (fp, stdout);
        fclose(fp);
      }
    if (ferror(stdout)) {
      fprintf(stderr, "%s: error writing stdout\n", prog);
      exit(2);
  }
  exit(0);
}