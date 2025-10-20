// kr_longest_main.c

#include <stdio.h>
#include "kr_longest.h"

int main(void) {
    int len, max = 0;
    char line[MAXLINE], longest[MAXLINE];

    while ((len = kr_getline(line, MAXLINE)) > 0)
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    if (max > 0)
        printf("%s", longest);
    return 0;
}