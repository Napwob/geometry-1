#include "func.h"
#include <stdio.h>
#include <stdlib.h>
void outOkr()
{
    double p, s;
    int m, n, r;
    printf("input parametrs(m,n,r)(cherez probel)");
    scanf("%d %d %d", &m, &n, &r);
    p = POkr(r);
    s = SOkr(r);
    printf("circle( %d , %d , %d ):P=%6.2f,S=%6.2f", m, n, r, p, s);
}
double POkr(int r)
{
    double pi = 3.14;
    return 2 * pi * r;
}
double SOkr(int r)
{
    double pi = 3.14;
    return pi * r * r;
}
