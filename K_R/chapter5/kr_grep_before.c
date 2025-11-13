// kr_grep_before.c


#include <stdio.h>
#include <string.h>

#define MAXLINE 1000

int getline(char *line, int max);

/* find: 最初の引数にあるパターンとマッチする行を表示する */
main(int argc, char *argv[])
{
    char line[MAXLINE];
    int found = 0;

    if (argc != 2)
        printf("Usage: find pattern\n");
    else
        while (getline(line, MAXLINE) > 0)
            if (strstr(line, argv[1]) != NULL)
            {
                printf("%s", line);
                found++;
            }
    
    return found;
}
