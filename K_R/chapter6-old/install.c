// install.c

#include "header.h"

struct nlist *install(char *name, char *defn)
{
  struct nlist *np;
  unsigned hashval;

  if ((np = lookup(name)) == NULL) {
    struct nlist *newp = malloc(sizeof *newp);
    if (!newp)
      return NULL;

    newp->name = strdup(name);
    if (!newp->name){
      free(newp);
      return NULL;
    }

    newp->defn = strdup(defn);
    if (!newp->defn){
      free(newp->name);
      free(newp);
      return NULL;
    }
    hashval = hash(name);
    newp->next = hashtab[hashval];
    hashtab[hashval] = newp;
    np = newp;
  } else{
    char *newdef = strdup(defn);
    if (!newdef)
      return NULL;
    free(np->defn);
    np->defn = newdef;
  }
  return np;
}