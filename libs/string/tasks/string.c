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


