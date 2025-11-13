// kr_cal_before.c

#include <stdio.h>
#include "headercal.h"

#define MAXLINE 100

/* cal: 原始的な電卓プログラム */
main()
{
    double sum;
    char line[MAXLINE];
    sum = 0;
    while (kr_getline_before(line, MAXLINE) > 0)
        printf("\t%g\n", sum += atof(line));

    return 0;
}