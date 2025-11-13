// header.h

#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

#if defined(__has_attribute)
#  if __has_attribute(format)
#    define PRINTF_LIKE(fmt_idx, va_idx) __attribute__((format(printf, fmt_idx, va_idx)))
#  else
#    define PRINTF_LIKE(fmt_idx, va_idx)
#  endif
#elif defined(__GNUC__) || defined(__clang__)
#  define PRINTF_LIKE(fmt_idx, va_idx) __attribute__((format(printf, fmt_idx, va_idx)))
#else
#  define PRINTF_LIKE(fmt_idx, va_idx)
#endif
void minprintf(const char *fmt, ...) PRINTF_LIKE(1, 2);
void filecopy(FILE *ifp, FILE *ofp);
char *fgetsf(char *s, int size_h, FILE *iop);
int fputsf(char *s, FILE *iop);
int getlinef(char *line, int max);

#ifdef __cplusplus
}
#endif

#endif /* HEADER_H */