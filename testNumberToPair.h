#ifndef TEST_NUMBERTOPAIR
#define TEST_NUMBERTOPAIR

inline void ColorPairToString(const ColorPair* colorPair, char* buffer);
inline ColorPair GetColorFromPairNumber(int pairNumber);
void testNumberToPair(int pairNumber,
    enum MajorColor expectedMajor,
    enum MinorColor expectedMinor);

#endif /*TEST_NUMBERTOPAIR*/
