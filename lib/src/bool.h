#ifndef BOOL_H
#define BOOL_H

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
#include <stdbool.h>
#else
typedef int bool;
enum BOOL { false, true };
#endif

#endif /* BOOL_H */