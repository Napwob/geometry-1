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
    const double x1 = 2;
    const double y1 = 2;
    const double r1 = 3;
    const double x2 = 5;
    const double y2 = 3;
    const double r2 = 2;

    // When
    const double result = peres(x1, y1, r1, x2, y2, r2);

    // Then
    const double expected = 2;
    ASSERT_EQUAL(expected, result);
}
