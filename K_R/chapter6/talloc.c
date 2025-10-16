// talloc.c

# include <stdlib.h>
# include "header.h"

struct tnode *talloc(void)
{
    return (struct tnode *) malloc(sizeof(struct tnode));
}