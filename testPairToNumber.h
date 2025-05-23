#ifndef TEST_PAIRTONUMBER
#define TEST_PAIRTONUMBER

#include "color_code_utils.h"

int GetPairNumberFromColor(const ColorPair* colorPair);

void testNumberToPair(int pairNumber,
    enum MajorColor expectedMajor,
    enum MinorColor expectedMinor);

void testPairToNumber(
    enum MajorColor major,
    enum MinorColor minor,
    int expectedPairNumber);

#endif /*TEST_PAIRTONUMBER*/
