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

// Constant for maximum color pair name characters
#define MAX_COLORPAIR_NAME_CHARS 16

#endif // COLOR_PAIR_H
