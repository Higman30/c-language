// main.c

#include <stdio.h>
#include "header.h"

int main (void)
{
  double sum;
  double v;

  sum = 0;
  while(scanf("%lf", &v) == 1)
    printf("\t%.2f\n", sum += v);
  return 0;
}