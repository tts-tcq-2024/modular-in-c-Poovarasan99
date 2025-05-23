#ifndef TEST_NUMBERTOPAIR
#define TEST_NUMBERTOPAIR

#include "color_code_utils.h"

void ColorPairToString(const ColorPair* colorPair, char* buffer);
ColorPair GetColorFromPairNumber(int pairNumber);
void testNumberToPair(int pairNumber,
    enum MajorColor expectedMajor,
    enum MinorColor expectedMinor);

#endif /*TEST_NUMBERTOPAIR*/
