// int maint.c

#include "header.h"

int main(void)
{
    struct tnode *root;
    char word[MAXWORD];   

    root = NULL;
    while (getword(word, MAXWORD) != EOF)
      if (isalpha((unsigned char)word[0]))
            root = addtree(root, word);
    treeprint(root);
    return 0;
}
