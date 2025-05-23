#ifndef COLOR_PAIR_H
#define COLOR_PAIR_H

#include "color_codes.h"

// Structure to represent a color pair
typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

// Function declarations
void ColorPairToString(const ColorPair* colorPair, char* buffer);
ColorPair GetColorFromPairNumber(int pairNumber);
int GetPairNumberFromColor(const ColorPair* colorPair);

#endif // COLOR_PAIR_H
