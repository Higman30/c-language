// kr_find_before.c

#include <stdio.h>
#include <string.h>

#define MAXLINE 1000

int getline(char *line, int max);


main(int argc, char *argv[])
{
    char line[MAXLINE];
    int lineno = 0;
    int c;
    int except = 0;
    int number = 0;
    int found = 0;

    while (--argc > 0 && (*++argv)[0] == '-')
        while (c = *++argv[0])
            switch (c)
            {
            case 'x':
                except = 1;
                break;
            case 'n':
                number = 1;
                break;
            default:
                printf("find: illegal option %c\n", c);
                argc = 0;
                found = -1;
                break;
            }
        if (argc != 1)
            printf("Usage: find -x -n pattern\n");
        else
            while (getline(line, MAXLINE) > 0)
            {
                lineno++;
                if ((strstr(line, *argv) != NULL) != except)
                {
                    if (number)
                        printf("%ld:", lineno);
                    printf("%s", line);
                    found++;
                }
            }
    
    return found;
}
