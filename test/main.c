#define CTEST_MAIN
#define CTEST_COLOR_OK
#include <ctest.h>
#include <func.h>
int main(int argc, const char** argv)
{
    return ctest_main(argc, argv);
}
CTEST(peres1__test, result_test)
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
CTEST(peres2__test, result_test)
{
    // Given
    const int x1 = 0;
    const int y1 = 0;
    const int r1 = 2;
    const int x2 = 20;
    const int y2 = 20;
    const int r2 = 3;

    // When
    const int result = peres(x1, y1, r1, x2, y2, r2);

    // Then
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}
CTEST(peres3__test, result_test)
{
    // Given
    const int x1 = 0;
    const int y1 = 0;
    const int r1 = 2;
    const int x2 = 0;
    const int y2 = 0;
    const int r2 = 3;

    // When
    const int result = peres(x1, y1, r1, x2, y2, r2);

    // Then
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}
CTEST(peres4__test, result_test)
{
    // Given
    const int x1 = 0;
    const int y1 = 0;
    const int r1 = 3;
    const int x2 = 0;
    const int y2 = 0;
    const int r2 = 3;

    // When
    const int result = peres(x1, y1, r1, x2, y2, r2);

    // Then
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
CTEST(peres5__test, result_test)
{
    // Given
    const int x1 = 0;
    const int y1 = 0;
    const int r1 = 3;
    const int x2 = 1;
    const int y2 = 1;
    const int r2 = 3;

    // When
    const int result = peres(x1, y1, r1, x2, y2, r2);

    // Then
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
CTEST(peres6__test, result_test)
{
    // Given
    const int x1 = 0;
    const int y1 = 0;
    const int r1 = 3;
    const int x2 = 1;
    const int y2 = 1;
    const int r2 = 1;

    // When
    const int result = peres(x1, y1, r1, x2, y2, r2);

    // Then
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}
CTEST(peres7__test, result_test)
{
    // Given
    const int x1 = 0;
    const int y1 = 0;
    const int r1 = 4;
    const int x2 = 2;
    const int y2 = 0;
    const int r2 = 2;

    // When
    const int result = peres(x1, y1, r1, x2, y2, r2);

    // Then
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
CTEST(peres8__test, result_test)
{
    // Given
    const int x1 = 0;
    const int y1 = 0;
    const int r1 = 5;
    const int x2 = 1;
    const int y2 = 0;
    const int r2 = 3;

    // When
    const int result = peres(x1, y1, r1, x2, y2, r2);

    // Then
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}
CTEST(peres9__test, result_test)
{
    // Given
    const int x1 = 3;
    const int y1 = 0;
    const int r1 = 3;
    const int x2 = 0;
    const int y2 = 0;
    const int r2 = 2;

    // When
    const int result = peres(x1, y1, r1, x2, y2, r2);

    // Then
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
CTEST(peres10__test, result_test)
{
    // Given
    const int x1 = 20;
    const int y1 = 20;
    const int r1 = 3;
    const int x2 = 0;
    const int y2 = 0;
    const int r2 = 2;

    // When
    const int result = peres(x1, y1, r1, x2, y2, r2);

    // Then
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}
CTEST(peres11__test, result_test)
{
    // Given
    const int x1 = 0;
    const int y1 = 0;
    const int r1 = 3;
    const int x2 = 0;
    const int y2 = 0;
    const int r2 = 2;

    // When
    const int result = peres(x1, y1, r1, x2, y2, r2);

    // Then
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(peres12__test, result_test)
{
    // Given
    const int x1 = 1;
    const int y1 = 1;
    const int r1 = 3;
    const int x2 = 0;
    const int y2 = 0;
    const int r2 = 3;

    // When
    const int result = peres(x1, y1, r1, x2, y2, r2);

    // Then
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
CTEST(peres13__test, result_test)
{
    // Given
    const int x1 = 1;
    const int y1 = 1;
    const int r1 = 1;
    const int x2 = 0;
    const int y2 = 0;
    const int r2 = 3;

    // When
    const int result = peres(x1, y1, r1, x2, y2, r2);

    // Then
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}
CTEST(peres14__test, result_test)
{
    // Given
    const int x1 = 2;
    const int y1 = 0;
    const int r1 = 2;
    const int x2 = 0;
    const int y2 = 0;
    const int r2 = 4;

    // When
    const int result = peres(x1, y1, r1, x2, y2, r2);

    // Then
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
CTEST(peres15__test, result_test)
{
    // Given
    const int x1 = 1;
    const int y1 = 0;
    const int r1 = 3;
    const int x2 = 0;
    const int y2 = 0;
    const int r2 = 5;

    // When
    const int result = peres(x1, y1, r1, x2, y2, r2);

    // Then
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}
CTEST(POkr1__test, result_test)
{
    // Given
    const int r = 3;

    // When
    const double result = POkr(r);

    // Then
    const double expected = 18.84;
    const double tol = 0.01;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}
CTEST(POkr2__test, result_test)
{
    // Given
    const int r = -3;

    // When
    const double result = POkr(r);

    // Then
    const double expected = 0;
    const double tol = 0;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}
CTEST(SOkr1__test, result_test)
{
    // Given
    const int r = 3;

    // When
    const double result = SOkr(r);

    // Then
    const double expected = 28.26;
    const double tol = 0.01;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}
CTEST(SOkr2__test, result_test)
{
    // Given
    const int r = -3;

    // When
    const double result = SOkr(r);

    // Then
    const double expected = 0;
    const double tol = 0;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}
CTEST(triangleS__test, result_test)
{
    // Given
    const int x1 = 0;
    const int y1 = 0;
    const int x2 = 2;
    const int y2 = 2;
    const int x3 = 4;
    const int y3 = 0;

    // When
    const double result = triangleS(x1, y1, x2, y2, x3, y3);

    // Then
    const double expected = 4.00;
    const double tol = 0.01;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}
CTEST(triangleP__test, result_test)
{
    // Given
    const int x1 = 0;
    const int y1 = 0;
    const int x2 = 2;
    const int y2 = 2;
    const int x3 = 4;
    const int y3 = 0;

    // When
    const double result = triangleP(x1, y1, x2, y2, x3, y3);

    // Then
    const double expected = 9.66;
    const double tol = 0.01;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}
CTEST(polygonS__test, result_test)
{
    // Given
    const int x1 = 0;
    const int y1 = 0;
    const int x2 = 5;
    const int y2 = 0;
    const int x3 = 5;
    const int y3 = 5;
    const int x4 = 0;
    const int y4 = 5;

    // When
    const double result = polygonS(x1, y1, x2, y2, x3, y3, x4, y4);

    // Then
    const double expected = 25.00;
    const double tol = 0.01;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}
CTEST(polygonP__test, result_test)
{
    // Given
    const int x1 = 0;
    const int y1 = 0;
    const int x2 = 5;
    const int y2 = 0;
    const int x3 = 5;
    const int y3 = 5;
    const int x4 = 0;
    const int y4 = 5;

    // When
    const double result = polygonP(x1, y1, x2, y2, x3, y3, x4, y4);

    // Then
    const double expected = 20.00;
    const double tol = 0.01;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}

