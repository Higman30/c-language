// kr_copy4.c

#include "kr_longest.h"

/* copy: 特別版 */
int copy(char to[], char from[]) {
    int i = 0;
    while ((to[i] = from[i]) != '\0')
        i++;

    return 0;
}