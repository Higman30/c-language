// kr_numcmp_after.c

#include <stdlib.h>


/* s1とs2を数値的に比較する */
int kr_numcmp_after(const char *s1, const char *s2)
{
    double v1;
    double v2;

    v1 = atof(s1);
    v2 = atof(s2);
    if (v1 < v2)
        return -1;
    else if (v1 > v2)
        return 1;
    else
        return 0;
}
