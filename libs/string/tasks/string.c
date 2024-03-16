#include "stdio.h"

size_t strlen_(const char *begin) {
    char *end = begin;

    while (*end != '\0')
        end++;
    return end - begin;
}

char* find(char *begin, char *end, int ch) {
    while (begin != end && *begin != ch)
        begin++;

    return begin;
}

char* findNonSpace(char *begin) {
    char *end = begin;

    while (*end == ' ' && *end != '\0') {
        end++;
    }

    return end;
}

char* findSpace(char *begin) {
    char *end = begin;

    while (*end != ' ' && *end != '\0') {
        end++;
    }

    return end;
}

char* findNonSpaceReverse(char *rbegin, const char *rend)  {
    while (rbegin != rend && (*rbegin == ' ' || *rbegin == '\0')) {
        rbegin--;
    }

    return rbegin;
}

char* findSpaceReverse(char *rbegin, const char *rend) {
    while (rbegin != rend && (*rbegin != ' ' || *rbegin == '\0')) {
        rbegin--;
    }

    return rbegin;
}

int strcmp(const char *lhs, const char *rhs) {
    for (; *lhs == *rhs; lhs++, rhs++) {
        if (*lhs == '\0') return 0;
    }

    return *lhs - *rhs;
}

char* copy(const char *beginSource, const char *endSource, char *beginDestination) {
    char *current = beginDestination;
    while (beginSource != endSource) {
        *current = *beginSource;
        current++;
        beginSource++;
    }
    return current;
}

char* copyIf(char *beginSource, const char *endSource, char *beginDestination, int (*f)(int)) {
    char *current = beginDestination;

    while (beginSource != endSource) {
        if (f(*beginSource)) {
            *current = *beginSource;
            current++;
        }
        beginSource++;
    }

    return current;
}

char* copyIfReverse(char *rbeginSource, const char *rendSource, char *beginDestination, int (*f)(int)) {
    char *current = beginDestination;
    while (rbeginSource != rendSource) {
        if (f(*rbeginSource)) {
            *current = *rbeginSource;
            current++;
        }
        rbeginSource--;
    }
    return beginDestination;
}
















