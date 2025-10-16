// filecopy.c

#include <stdio.h>
#include "header.h"

void filecopy (FILE *ifp, FILE *ofp)
{
  int c;

  while ((c = getc(ifp)) != EOF)
    putc(c, ofp);
}