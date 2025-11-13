// kr_grep_after.c


#include <stdio.h>
#include <string.h>
#include "kr_header_grep.h"

#define MAXLINE 1000


/* find: 最初の引数にあるパターンとマッチする行を表示する */
int main(int argc, char *argv[])
{
    char line[MAXLINE];
    int found = 0;

    if (argc != 2)
    {
        printf("Usage: find pattern\n");
    }
    else{
        while (kr_getline_after(line, MAXLINE) > 0)
        {
            if (strstr(line, argv[1]) != NULL)
            {
                printf("%s", line);
                found++;
            }
        }
    }

    return found;
}
