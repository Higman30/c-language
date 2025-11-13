// header.h

#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#define MAXWORD 100
#define BUFSIZE 100
#define HASHSIZE 101

struct key {
    char *word;
    int   count;
};
struct tnode {
    char *word;
    int count;
    struct tnode *left;
    struct tnode *right;
};
struct nlist {
    struct nlist *next;
    char *name;
    char *defn;
};

extern struct key keytab[];
extern struct nlist *hashtab[HASHSIZE];
extern const int NKEYS; 
char buf[BUFSIZE];
int bufp;

int getword(char *,int);
int binsearch(char *, struct key tab[], int);
struct tnode *addtree(struct tnode *, char *);
struct key *binsearchp(char *, struct key *tab, int); 
struct tnode *talloc(void);
void treeprint(struct tnode *);
int getword(char *, int);
unsigned hash(char *s);
struct nlist *lookup(char *s);
struct nlist *install(char *name, char *defn);

#endif
