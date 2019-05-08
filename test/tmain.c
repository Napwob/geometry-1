#define CTEST_COLOR_OK
#include <ctest.h>
#include <func.h>
int main(int argc, const char** argv)
{
    return ctest_main(argc, argv);
}
CTEST(peres1__test, result)
{
    // Given
    const int x1 = 0;
    const int y1 = 0;
    const int r1 = 2;
    const int x2 = 3;
    const int y2 = 0;
    const int r2 = 3;

    // When
    const int result = peres(x1, y1, r1, x2, y2, r2);

    // Then
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
