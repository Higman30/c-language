// kr_cal_after.c

#include <stdio.h>
#include "headercal_after.h"


/* cal: 原始的な電卓プログラム */
int main(void)
{
    double sum;
    char line[MAXLINE];
    sum = 0;
    while (kr_getline_after(line, MAXLINE) > 0)
        printf("\t%g\n", sum += kr_atof_after(line));

    return 0;
}