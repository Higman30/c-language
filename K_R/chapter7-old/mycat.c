// mycat.c

#include <stdio.h>
#include <stdlib.h>
#include "header.h"

/* cat： ファイルの連結，第1版 */
int main(int argc, char *argv[])
{
  FILE *fp;

  if (argc == 1) {  /* 引数なし；標準入力をコピー */
    filecopy(stdin, stdout) ;
  }else{
    while (--argc > 0){
      if ((fp = fopen (*++argv, "r")) == NULL) {
        printf ("cat: can't open %s\n", *argv);
        return 1;
      } else {
        filecopy (fp, stdout);
        fclose(fp);
      }
    }
  }
  return 0;
}