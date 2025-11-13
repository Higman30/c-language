// getlinef.c

#include "header.h"
#include <string.h>

/* 1 行読んで、長さを返す */
 int getlinef(char *line, int max)
 {
    if (fgets(line, max, stdin) == NULL)
      return 0;
    else
      return (int)strlen(line);
 }