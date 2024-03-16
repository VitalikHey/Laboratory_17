#ifndef LABORATORY_17_STRING_H
#define LABORATORY_17_STRING_H

#include "stdio.h"

size_t strlen_(const char *begin);

char* find(char *begin, char *end, int ch);

char* findNonSpace(char *begin);

char* findSpace(char *begin);

char* findNonSpaceReverse(char *rbegin, const char *rend);

#endif //LABORATORY_17_STRING_H
