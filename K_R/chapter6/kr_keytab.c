// kr_keytab.c

#include "kr_header.h"

struct key keytab[] = {
    {"auto", 0},
    {"break", 0},
    {"case", 0},
    {"char", 0},
    {"const", 0},
    {"continue", 0},
    {"default", 0},
    /* ... */
    {"unsigned", 0},
    {"void", 0},
    {"volatile", 0},
    {"while", 0}
};

#define NKEYS (sizeof keytab / sizeof(keytab[0]))
