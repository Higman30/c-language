// minprintf.c

#include <stdarg.h>
#include <stdio.h>
#include "header.h"

void minprintf(const char *fmt, ...)
{
  va_list ap;
  const char *p;
  char *sval;
  int ival;
  double dval;

va_start(ap, fmt);
for (p = fmt; *p; p++) {
    if(*p != '%') {
        putchar(*p);
        continue;
      }
      switch (*++p) {
      case 'd':
        ival = va_arg(ap, int);
        printf("%d", ival);
        break;
      case 'f':
        dval = va_arg(ap, double);
        printf("%f", dval);
        break;
      case 's':
        for (sval=va_arg(ap,char*); *sval; sval++)
          putchar(*sval);
        break;
      case '%':
        putchar('%');
        break;
      default:
        putchar('%');
        putchar(*p);
        break;
      }
    }
    va_end(ap);
  }