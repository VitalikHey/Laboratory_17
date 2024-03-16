#include "test_for_tasks.h"
#include "../../../libs/string/tasks/string.h"
#include <stdio.h>
#include <assert.h>

void allTest() {
    testStrlen_();
    testFind();
    testFindNonSpace();
    testFindSpace();
    testFindNonSpaceReverse();
    testFindSpaceReverse();
    testCopy();
    testCopyIf();
    testCopyIfReverse();
}

void testStrlen_() {
    const char *testString = "Hello, World!";
    size_t length = strlen_(testString);
    assert(length == 13);
}

void testFind() {
    char testString[] = "Find char test";
    char *found = find(testString, testString + 15, 'c');
    assert(found != testString + 15 && *found == 'c');
}

void testFindNonSpace() {
    char testString[] = "   Find non-space test";
    char *found = findNonSpace(testString);
    assert(found != testString && *found == 'F');
}

void testFindSpace() {
    char testString[] = "Find space test";
    char *found = findSpace(testString);
    assert(found == testString + 4 && *found == ' ');
}

void testFindNonSpaceReverse() {
    char testString[] = "Find non-space reverse test   ";
    char *found = findNonSpaceReverse(testString + 23, testString);
    assert(found != testString && *found == 't');
}

void testFindSpaceReverse() {
    char str1[] = "This is a test string";
    char *result1 = findSpaceReverse(&str1[14], &str1[0]);
    assert(*result1 == ' ');
}

void testCopy() {
    const char *source = "Copy test";
    char destination[20];
    copy(source, source + 9, destination);
    destination[9] = '\0';   // добавляем завершающий нулевой символ
    assert(strcmp(source, destination) == 0);
}

int isUpperCase(int c) {
    return (c >= 'A' && c <= 'Z');
}

void testCopyIf() {
    const char *source = "CopyIf test";
    char destination[20];
    char *endOfDestination = copyIf(source, source + strlen_(source), destination, isUpperCase);
    *endOfDestination = '\0';  // добавляем завершающий нулевой символ

    const char *expectedResult = "CI";
    assert(strcmp(destination, expectedResult) == 0);
}

int upperCase(int ch) {
    return (ch >= 'A' && ch <= 'Z');
}

void testCopyIfReverse() {
    char source[] = "HelloWorld";
    char dest[11];
    char *result = copyIfReverse(&source[9], &source[0], dest, &upperCase);

    assert(*result == 'W');
}